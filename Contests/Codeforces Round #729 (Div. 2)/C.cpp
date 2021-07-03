#include <bits/stdc++.h>
#include <iostream>
#define ll long long int
#define mod 1000000007
using namespace std;
 

ll f2(ll x,ll y ){
    while(y){
        ll res=y;
        y=x%y;
        x=res;
    }
    return x;
}

 
 ll f1(ll a,ll b,ll c){

    ll m=0,n,r;
    if(a==0){
        return 0;
    }

    else{
    
     n=b/f2(b,c);

     r=a/n;

    m=(((a-r)%mod)*b)%mod;

    m+=(f1(r,b+1,c*n))%mod;

    m=m%mod;

         return m;
    }
}
 
 
int main(){
    
   
   ios_base::sync_with_stdio(false); cin.tie(NULL);

    ll tests;
    
	cin>>tests;
    for (ll i = 0; i < tests; ++i){
        ll n,final=0,rt=0;

        cin>>n;
    final=f1(n,2,1);
    rt++;

    cout<<final<<endl;
      
    }
    return 0;
}