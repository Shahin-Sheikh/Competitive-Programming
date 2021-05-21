#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main(){
    ll n,a,b,c,res=1,hold=0,count=0;
    cin>>n>>a>>b>>c;
    for(ll i=1;i<=n;i++){
        res = abs(n/i);
        if(res==a || res==b || res==c){
            hold = i;
        }
    }
    cout<<hold<<"\n";
    return 0;
}