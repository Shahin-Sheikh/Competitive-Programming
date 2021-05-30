#include<bits/stdc++.h>
using namespace std;

int main(){
    int n,a,b,res=0,res1=0;
    cin>>n;
    for(int i=0;i<n;i++){
        cin>>a;
        cin>>b;
        res = res - a;
        res = res + b;
        res1 = max(res1,res);
    }
    cout<<res1<<"\n";
    return 0;
}