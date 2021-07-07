#include <bits/stdc++.h>
typedef long long ll;
using namespace std;

ll gcd(ll x,ll y ){
    while(y){
        ll res=y;
        y=x%y;
        x=res;
    }
    return x;
}

ll lcm(int a, int b)
{
    return (a / gcd(a, b)) * b;
}

int main(){
    ios_base::sync_with_stdio(false); cin.tie(NULL);
    ll a,b,tests;
    cin>>tests;

    vector<int> s;
    for (int i = 0; i < tests; ++i)
    {
        ll first,second,tm,tm1,tm2;
        cin>>first>>second;

        tm=second-first;
        tm1=first-second;
        if(first==second){
            cout<<"0 0"<<"\n";
        }
        else if(first<second){
            ll final1=min(first%tm,tm-first%tm);
            cout<<tm<<" "<<final1<<"\n";
        }
        else{
            ll final2=min(second%tm1,tm1-second%tm1);

            cout<<tm1<<" "<<final2<<"\n";
        }
    }
    return 0;
}