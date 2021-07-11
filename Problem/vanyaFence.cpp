#include<bits/stdc++.h>
using namespace std;

int main(){
    int n,h,sum=0;
    cin>>n>>h;
    int ara[n];
    for(int i=0;i<n;i++){
        cin>>ara[i];
        if(ara[i]>h){
            sum = sum + 2;
        }
        else{
            sum = sum + 1;
        }
    }
    cout<<sum<<"\n";
    return 0;
}