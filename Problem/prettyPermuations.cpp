#include<bits/stdc++.h>
using namespace std;

void run_case(){
    int n,pos=0,temp=0,npos=0;
    cin>>n;
    int ara[n];
    for(int i=0;i<n;i++){
        ara[i] = i+1;
    }
    if(n%2==0){
        for(int i=0;i<n;i+=2){
            swap(ara[i],ara[i+1]);
        }
    }
    else{
        for(int i=0;i<n-1;i+=2){
            swap(ara[i], ara[i+1]);
        }
        swap(ara[n-2], ara[n-1]);
    }
    for(int i=0;i<n;i++){
        cout<<ara[i]<<"\n";
    }
}
int main(){
    int tests;
    cin>>tests;
    while(tests--){
        run_case();
    }
    return 0;
}