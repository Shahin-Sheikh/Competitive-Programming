#include <bits/stdc++.h>
typedef long long ll;
using namespace std;

int main(){
	ios_base::sync_with_stdio(false); cin.tie(NULL);

    ll tests;
    cin>>tests;
    for (int i = 0; i < tests; ++i)
    { 
        ll a,b;
        cin>>a>>b;
        ll ara[a+5];
        ara[0]=0;
        ara[1]=1;
        ara[2]=3;
        ara[3]=1;
        ll r=2,z=3;
        for(ll i=0;i<a;i++){
            if(i<=3){
                cout<<ara[i]<<"\n";
                cout.flush();
            }
            else{
                ll j=i;
                while(j%2==0){
                    j/=2;
                }
                if(j==1){
                    r*=2;
                    z+=r;
                    cout<<z<<"\n";
                    cout.flush();
                    ara[i]=z;
                }
                else{
                    ara[i]=ara[i-r];
                    cout<<ara[i]<<"\n";
                    cout.flush();
                }
            }
            ll a;
            cin>>a;
            if(a==1){
                break;
            }
        }
    }
    return 0;
}