#include <bits/stdc++.h>
using namespace std;

void tr(){
  int n,mul=1,sum=0,sum1=0,fsum=0;
  cin>>n;
  mul = 2*n;
  int ara[mul];
  for(int i=0;i<mul;i++){
      cin>>ara[i];
      if(ara[i]%2==1){
          sum++;
      }else{
          sum1++;
      }
    }
     if(sum==n || sum1==n){
          cout<<"YES\n";
      }
      else{
          cout<<"NO\n";
      }
}

int main(){
    ios_base::sync_with_stdio(false); cin.tie(NULL);
    int tests;
    cin>>tests;
    while (tests--){
        tr();
    }
    return 0;
}