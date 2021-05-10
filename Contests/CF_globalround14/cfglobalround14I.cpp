#include <cstdio>
#include <algorithm>
#include <functional>
#include <utility>
#include <numeric>
#include <cassert>

using ll=long long;

const ll INF=1e18+7;

struct Diamond{
  int w,v,t;
  ll a;
}diamonds[200005];
int index[200005];
int N;

struct Node{
  ll sum_w[31];//sum of weights of all diamonds with weight <2^k
  ll sum_v[31];//sum of values of all diamonds with weight <2^k
  ll one_w[31];//sum of weights of light+first heavy when restricted to <2^k
  ll one_v[31];//sum of values of light+first heavy when restricted to <2^k
}st[800005];

void rebuild(int w,int L,int R,int a,int b){
  if(a>=R||b<=L) return;
  if(R-L==1){
    for(int k=1;k<=30;k++){
      st[w].sum_w[k]=diamonds[L].a*diamonds[L].w*(diamonds[L].w<(1<<k));
      st[w].sum_v[k]=diamonds[L].a*diamonds[L].v*(diamonds[L].w<(1<<k));
      st[w].one_w[k]=INF;//query capacity never exceed INF
      st[w].one_v[k]=INF;
      if(diamonds[L].w>=(1<<(k-1))&&diamonds[L].w<(1<<k)&&diamonds[L].a>0){
	st[w].one_w[k]=diamonds[L].w;
	st[w].one_v[k]=diamonds[L].v;
      }
    }
  }else{
    int M=(L+R)/2;
    rebuild(w*2+1,L,M,a,b);
    rebuild(w*2+2,M,R,a,b);
    for(int k=1;k<=30;k++){
      st[w].sum_w[k]=st[w*2+1].sum_w[k]+st[w*2+2].sum_w[k];
      st[w].sum_v[k]=st[w*2+1].sum_v[k]+st[w*2+2].sum_v[k];
      if(st[w*2+1].one_w[k]<st[w*2+1].sum_w[k-1]+st[w*2+2].one_w[k]){
	st[w].one_w[k]=st[w*2+1].one_w[k];
	st[w].one_v[k]=st[w*2+1].one_v[k];
      }else{
	st[w].one_w[k]=st[w*2+1].sum_w[k-1]+st[w*2+2].one_w[k];
	st[w].one_v[k]=st[w*2+1].sum_v[k-1]+st[w*2+2].one_v[k];
      }
    }
  }
}

//only consider weights <2^k
//take maximal prefix possible
void query_all(int w,int L,int R,int& i,int k,ll& cap,ll& value){
  assert(i>=L&&i<=R);
  assert(R-L>0);
  if(i==R) return;
  if(i==L&&st[w].sum_w[k]<=cap){
    cap-=st[w].sum_w[k];
    value+=st[w].sum_v[k];
    i=R;
  }else if(R-L>1){
    int M=(L+R)/2;
    if(i<M){
      query_all(w*2+1,L,M,i,k,cap,value);
    }
    if(i>=M){
      query_all(w*2+2,M,R,i,k,cap,value);
    }
  }
}

std::array<ll,2> query_one_range_simpl(int w,int L,int R,int a,int b,int k){
  if(a>=R||b<=L) return {INF,0};
  if(a<=L&&b>=R){
    return {st[w].one_w[k],st[w].sum_w[k-1]};
  }else{
    int M=(L+R)/2;
    std::array<ll,2> lsum,rsum;
    lsum=query_one_range_simpl(w*2+1,L,M,a,b,k);
    rsum=query_one_range_simpl(w*2+2,M,R,a,b,k);
    if(lsum[0]<lsum[1]+rsum[0]){
      return {lsum[0],lsum[1]+rsum[1]};
    }else{
      return {lsum[1]+rsum[0],lsum[1]+rsum[1]};
    }
  }
}

std::array<ll,4> query_one_range(int w,int L,int R,int a,int b,int k){
  if(a>=R||b<=L) return {INF,INF,0,0};
  if(a<=L&&b>=R){
    return {st[w].one_w[k],st[w].one_v[k],st[w].sum_w[k-1],st[w].sum_v[k-1]};
  }else{
    int M=(L+R)/2;
    std::array<ll,4> lsum,rsum;
    lsum=query_one_range(w*2+1,L,M,a,b,k);
    rsum=query_one_range(w*2+2,M,R,a,b,k);
    if(lsum[0]<lsum[2]+rsum[0]){
      return {lsum[0],lsum[1],lsum[2]+rsum[2],lsum[3]+rsum[3]};
    }else{
      return {lsum[2]+rsum[0],lsum[3]+rsum[1],lsum[2]+rsum[2],lsum[3]+rsum[3]};
    }
  }
}

//returns min j such that one_w[i..j) <= cap, or -1 if none exist
//reduce cap by weight of light in [max(i,L),R)
int query_one_range_search_(int w,int L,int R,int& i,int k,ll& cap){
  assert(i>=L&&i<=R);
  assert(R-L>0);
  if(i==R) return -1;
  if(i==L&&st[w].one_w[k]>cap){
    cap-=st[w].sum_w[k-1];
    i=R;
    return -1;
  }else if(R-L==1){
    assert(i==L);
    assert(st[w].one_w[k]<=cap);
    cap-=st[w].sum_w[k-1];
    i=R;
    return R;
  }else{
    int M=(L+R)/2;
    int res=-1;
    if(i<M){
      res=query_one_range_search_(w*2+1,L,M,i,k,cap);
    }
    if(res!=-1) return res;
    if(i>=M){
      res=query_one_range_search_(w*2+2,M,R,i,k,cap);
    }
    return res;
  }
}

int query_one_range_search(int i,int k,ll cap){
  //note this copy of cap will be modified
  return query_one_range_search_(0,0,N,i,k,cap);
}

void query_one(int& L,int k,ll& cap,ll& value){
  int high=query_one_range_search(L,k,cap);
  //v[high]<=cap
  if(high!=-1){
    auto v=query_one_range(0,0,N,L,high,k);
    L=high;
    cap-=v[0];
    value+=v[1];
  }
}

ll query(ll cap){
  ll value=0;
  int i=0;
  for(int k=30;k>0;k--){
    query_all(0,0,N,i,k,cap,value);
    if(i==N) break;
    ll take=std::min(diamonds[i].a,cap/diamonds[i].w);
    cap-=take*diamonds[i].w;
    value+=take*diamonds[i].v;
    i++;
    query_one(i,k,cap,value);
  }
  return value;
}

int main(){
  int Q;
  scanf("%d %d",&N,&Q);
  for(int i=0;i<N;i++){
    scanf("%lld %d %d",&diamonds[i].a,&diamonds[i].w,&diamonds[i].v);
    diamonds[i].t=i;
  }
  std::sort(diamonds,diamonds+N,[](Diamond x,Diamond y){
      return (x.v!=y.v)?(x.v>y.v):(x.w<y.w);
    });
  for(int i=0;i<N;i++){
    index[diamonds[i].t]=i;
  }
  rebuild(0,0,N,0,N);
  for(int i=0;i<Q;i++){
    int T;
    scanf("%d",&T);
    if(T==1){
      int K,D;
      scanf("%d %d",&K,&D);
      D--;
      diamonds[index[D]].a+=K;
      rebuild(0,0,N,index[D],index[D]+1);
    }else if(T==2){
      int K,D;
      scanf("%d %d",&K,&D);
      D--;
      diamonds[index[D]].a-=K;
      assert(diamonds[index[D]].a>=0);
      rebuild(0,0,N,index[D],index[D]+1);
    }else{
      ll C;
      scanf("%lld",&C);
      printf("%lld\n",query(C));
    }
  }