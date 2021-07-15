#include<bits/stdc++.h>
using namespace std;

int main(){
    int n,x,res=0;
    cin>>n;
    for(int i=0;i<n;i++){
        cin>>x;
    }
    if(n==1){
        res = 1;
        cout<<res<<"\n";
    }
    else if(n==1){
        res = 2;
        cout<<res<<"\n";
    }
    else{
        res = n/2;
        cout<<res<<"\n";
    }
    return 0;
}