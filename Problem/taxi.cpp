#include<bits/stdc++.h>
using namespace std;

int main(){
    double sum=0,res=0;
    int n;
    cin>>n;
    int ara[n];
    for(int i=0;i<n;i++){
        cin>>ara[i];
        sum = sum + ara[i];
    }
    res = sum/4;
    cout<<ceil(res)<<"\n";
    return 0;
}