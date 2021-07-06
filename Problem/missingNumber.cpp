#include<bits/stdc++.h>
using namespace std;

int main(){
    int n,x,res=0;
    cin>>n;
    for(int i=1;i<=n-1;i++){
        cin>>x;
        if(x != i){
            res = i;
        }
    }
    cout<<res<<"\n";
    return 0;
}