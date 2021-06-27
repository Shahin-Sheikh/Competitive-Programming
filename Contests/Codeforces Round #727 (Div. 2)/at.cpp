#include <bits/stdc++.h>
 
#define ll          long long int
#define mod         1000000007
#define endl        "\n"
#define pb          push_back
#define max2(a,b)   ((a<b)?b:a)
#define max3(a,b,c) max2(max2(a,b),c)
#define min2(a,b)   ((a>b)?b:a)
#define min3(a,b,c) min2(min2(a,b),c)
 
 
 
using namespace std;
 
 
int main(){
    ios_base::sync_with_stdio(false); cin.tie(NULL);
    ll t;
    cin>>t;
    for (ll iii = 0; iii < t; ++iii)
    {

        ll a,b,c,x,y,temp,result;
        // vector<ll> v;
        //  int input;
        // while (cin >> input){
     //    v.push_back(input);
        // }
        // int n=v.size();
 
        // for (int i = 0; i < n; ++i){
 
        //     cout<<v[i]<<endl;
        // }
        cin>>a>>b>>c;
        x=c/b;
        temp=min2(a-1,x);
 
        if(temp==0){
            cout<<0<<endl;

        }
 
        else{
            result=(temp(temp-1)/2)+temp(a-temp);
            cout<<result<<endl;
        }
 
    }

    return 0;
}