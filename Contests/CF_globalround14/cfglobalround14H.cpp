#include <cstdio>
#include <cassert>
#include <utility>
#include <functional>

//numbers up to 2^MAXLOGX-1
const int MAXLOGX=20;

template<int k>
struct Trie{
  Trie<k-1>* chd[2];
  int cnt;
  int lazy;
  int has[2];
  int get_cnt(){
    assert(this!=NULL);
    return cnt;
  }
  int get_has(int d){
    assert(this!=NULL);
    push();
    assert(has[d]<(1<<(k+1)));
    return has[d];
  }
  Trie(Trie<k-1>* l,Trie<k-1>* r):chd{l,r},cnt(0),lazy(0),has{0,0}{
    if(l){
      cnt+=l->get_cnt();
      has[0]|=l->get_has(0)|(1<<k);
      has[1]|=l->get_has(1);
    }
    if(r){
      cnt+=r->get_cnt();
      has[0]|=r->get_has(0);
      has[1]|=r->get_has(1)|(1<<k);
    }
    assert(has[0]<(1<<(k+1)));
    assert(has[1]<(1<<(k+1)));
  }
  void push(){
    assert(lazy<(1<<(k+1)));
    if(!lazy) return;
    //handle kth bit
    if(lazy&(1<<k)){
      std::swap(chd[0],chd[1]);
      if((has[0]^has[1])&(1<<k)){
	has[0]^=(1<<k);
	has[1]^=(1<<k);
      }
      lazy^=(1<<k);
    }
    //handle rest of bits
    int flip=(has[0]^has[1])&lazy;
    has[0]^=flip;
    has[1]^=flip;
    if(chd[0]) chd[0]->lazy^=lazy;
    if(chd[1]) chd[1]->lazy^=lazy;
    lazy=0;
    assert(has[0]<(1<<(k+1)));
    assert(has[1]<(1<<(k+1)));
  }
};

template<>
struct Trie<-1>{
  int lazy;
  Trie():lazy(0){
  }
  int get_cnt(){
    assert(this!=NULL);
    return 1;
  }
  int get_has(int d){
    assert(this!=NULL);
    return 0;
  }
};

template<int k>
Trie<k>* create(int x){
  if(x&(1<<k)){
    return new Trie<k>(NULL,create<k-1>(x));
  }else{
    return new Trie<k>(create<k-1>(x),NULL);
  }
}
template<>
Trie<-1>* create(int x){
  return new Trie<-1>();
}

template<int k>
std::pair<Trie<k-1>*,Trie<k-1>*> destruct(Trie<k>* a){
  assert(a!=NULL);
  a->push();
  auto res=std::make_pair(a->chd[0],a->chd[1]);
  delete a;
  return res;
}

template<int k>
Trie<k>* join(Trie<k-1>* l,Trie<k-1>* r){
  if(l==NULL&&r==NULL) return NULL;
  return new Trie<k>(l,r);
}

template<int k>
Trie<k>* merge(Trie<k>* a,Trie<k>* b){
  if(!a) return b;
  if(!b) return a;
  auto aa=destruct(a);
  auto bb=destruct(b);
  Trie<k-1>* l=merge<k-1>(aa.first,bb.first);
  Trie<k-1>* r=merge<k-1>(aa.second,bb.second);
  return join<k>(l,r);
}

template<>
Trie<-1>* merge<-1>(Trie<-1>* a,Trie<-1>* b){
  if(!a) return b;
  if(!b) return a;
  delete b;
  return a;
}

template<int k>
//<thres and >=thres
std::pair<Trie<k>*,Trie<k>*> split(Trie<k>* a,int thres){
  if(a==NULL){
    return {NULL,NULL};
  }
  if(thres<=0) return {NULL,a};
  if(thres>=(1<<(k+1))) return {a,NULL};
  assert(k>=0);
  auto aa=destruct(a);
  if(thres<(1<<k)){
    Trie<k-1>* l,*r;
    std::tie(l,r)=split<k-1>(aa.first,thres);
    return std::make_pair(join<k>(l,NULL),join<k>(r,aa.second));
  }else if(thres>(1<<k)){
    Trie<k-1>* l,*r;
    std::tie(l,r)=split<k-1>(aa.second,thres-(1<<k));
    return std::make_pair(join<k>(aa.first,l),join<k>(NULL,r));
  }else{
    return std::make_pair(join<k>(aa.first,NULL),join<k>(NULL,aa.second));
  }
}

template<>
std::pair<Trie<-1>*,Trie<-1>*> split<-1>(Trie<-1>* a,int thres){
  assert(0);
}

template<int k>
Trie<k>* update(Trie<k>* a,int val){
  if(a==NULL) return NULL;
  a->push();
  assert(val<(1<<(k+1)));
  if((val&a->has[0]&a->has[1])==0){
    a->lazy^=(val&a->has[0]);
    return a;
  }
  Trie<k-1>* l,*r;
  std::tie(l,r)=destruct(a);
  l=update<k-1>(l,val&~(1<<k));
  r=update<k-1>(r,val&~(1<<k));
  if(val&(1<<k)){
    return join<k>(NULL,merge<k-1>(l,r));
  }else{
    return join<k>(l,r);
  }
}

template<>
Trie<-1>* update<-1>(Trie<-1>* a,int val){
  return a;
}

int main(){
  Trie<MAXLOGX-1>* root=NULL;
  int N,Q;
  scanf("%d %d",&N,&Q);
  for(int i=0;i<N;i++){
    int A;
    scanf("%d",&A);
    root=merge(root,create<MAXLOGX-1>(A));
  }
  for(int i=0;i<Q;i++){
    int T,L,R;
    scanf("%d %d %d",&T,&L,&R);
    Trie<MAXLOGX-1>* left,*right;
    std::tie(left,root)=split(root,L);
    std::tie(root,right)=split(root,R+1);
    if(T==4){
      printf("%d\n",root?root->cnt:0);
    }else{
      int X;
      scanf("%d",&X);
      if(root!=NULL){
	if(T==1){
	  root->lazy^=((1<<MAXLOGX)-1);
	  root=update(root,X^((1<<MAXLOGX)-1));
	  root->lazy^=((1<<MAXLOGX)-1);
	}else if(T==2){
	  root=update(root,X);
	}else if(T==3){
	  assert(X<(1<<MAXLOGX));
	  root->lazy^=X;
	}
      }
    }
    root=merge(root,left);
    root=merge(root,right);
  }
}