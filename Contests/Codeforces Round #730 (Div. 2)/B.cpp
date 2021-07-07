#include <bits/stdc++.h>
typedef long long ll;
using namespace std;


int main(){
	ios_base::sync_with_stdio(false); cin.tie(NULL);
	ll tests;
    cin>>tests;

   for (int i = 0; i < tests; ++i)
   {
    ll first,second,tm=0,tm1,tm2,f;
    cin>>first;
    
    for(ll i=0;i<first;i++){
        cin>>second;
        tm = tm + second;
    }

    tm1 = tm%first;
    tm2 = first-tm%first;
    f = tm1*tm2;
    cout<<f<<"\n";
   }
   return 0;
}