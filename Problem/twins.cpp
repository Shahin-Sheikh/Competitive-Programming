#include<bits/stdc++.h>
using namespace std;

int main(){
    int n,sum=0,count=0,sum1=0;
    cin>>n;
    int ara[n];
    for(int i=0;i<n;i++){
        cin>>ara[i];
        sum += ara[i];
    }
    sum = sum/2;
    sort(ara, ara+n);
    for(int i=n-1;i>=0;i--){
        sum1 += ara[i];
        count++;
        if(sum1>sum){
            break;
        }
    }
    cout<<count<<"\n";

    return 0;
}