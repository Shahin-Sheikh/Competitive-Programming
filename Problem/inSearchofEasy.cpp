#include<bits/stdc++.h>
using namespace std;

int main(){
    int n,count=0,count1=0;
    cin>>n;
    int ara[n];
    for(int i=0;i<n;i++){
        cin>>ara[i];
        if(ara[i]==0){
            count++;
        }
        if(ara[i]==1){
            count1++;
        }
    }
    if(count1>=1){
        cout<<"HARD\n";
    }
    else{
        cout<<"EASY\n";
    }
    count = 0, count1 = 0;
    return 0;
}