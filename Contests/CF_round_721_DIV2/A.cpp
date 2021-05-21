#include <bits/stdc++.h>
//typedef long long ll;
#define ll          long long int
using namespace std;

int main(){
	ios_base::sync_with_stdio(false); cin.tie(NULL);
    ll t;
    cin>>t;
    for(ll i=0;i<t;i++){
    	ll n,s;
		cin>>n>>s;
		ll count=n;
		while(count !=0){
			 count = count & (n-1);
			s=n-1;
			n--;
		}
		cout<<s<<"\n";
  	}
    return 0;
}