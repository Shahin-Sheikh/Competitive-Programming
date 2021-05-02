#include <bits/stdc++.h>
#include <iostream>
#define ll long long int


using namespace std;

int main(){

    ll t;
    cin>>t;
    ll multi = 1;
    for (int i = 0; i < t; ++i)
    {
        vector<ll> v;
        ll n;
        cin>>n;

        for (int j = 0; j <= n-1; ++j)
        {
            cin>>v[j];
        }

        for(int k = 0; k < v.size()-1; k++)
        {
            multi = multi * v[k];
            cout<<multi;
        }

    }

    return 0;
}
