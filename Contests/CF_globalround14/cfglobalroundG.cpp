#include <cstdio>
#include <vector>
#include <cassert>
#include <algorithm>
#include <cmath>

using ll = long long;

std::vector<std::pair<int,int> > fwd[200005];
std::vector<std::pair<int,int> > rev[200005];

int vis[200005];
int cc[200005];
ll offset[200005];
int ncc;
ll loop[200005];
std::vector<int> ord;

ll gcd(ll a,ll b){
  return b?gcd(b,a%b):a;
}

void dfs_fwd(int x){
  vis[x]=1;
  for(auto e:fwd[x]){
    int y=e.first;
    if(vis[y]!=1){
      dfs_fwd(y);
    }
  }
  ord.push_back(x);
}

void dfs_rev(int x){
  vis[x]=2;
  for(auto e:rev[x]){
    int y=e.first,l=e.second;
    if(vis[y]!=2){
      cc[y]=cc[x];
      offset[y]=offset[x]+l;
      dfs_rev(y);
    }else if(cc[y]==cc[x]){
      loop[cc[x]]=gcd(loop[cc[x]],std::llabs(offset[x]+l-offset[y]));
    }
  }
}

int main(){
  int N,M;
  scanf("%d %d",&N,&M);
  for(int i=0;i<M;i++){
    int A,B,L;
    scanf("%d %d %d",&A,&B,&L);
    A--,B--;
    fwd[A].push_back({B,L});
    rev[B].push_back({A,L});
  }
  for(int i=0;i<N;i++){
    if(vis[i]!=1){
      dfs_fwd(i);
    }
  }
  std::reverse(ord.begin(),ord.end());
  for(int i:ord){
    if(vis[i]!=2){
      cc[i]=ncc++;
      offset[i]=0;
      dfs_rev(i);
    }
  }
  int Q;
  scanf("%d",&Q);
  for(int i=0;i<Q;i++){
    int V,S,T;
    scanf("%d %d %d",&V,&S,&T);
    V--;
    assert(0<=S&&S<T);
    if(S%gcd(loop[cc[V]],T)==0){
      printf("YES\n");
    }else{
      printf("NO\n");
    }
  }
}