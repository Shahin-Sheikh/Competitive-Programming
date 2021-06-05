#include<bits/stdc++.h>
using namespace std;

int main(){
    string s,t;
    cin>>s;
    cin>>t;
    reverse(s.begin(), s.end());
    if(s == t){
        cout<<"YES\n";
    }
    else{
        cout<<"NO\n";
    }
    return 0;
}