#include<bits/stdc++.h>
using namespace std;

void run_case(){
    int n,x,cc=0,count=0;
    cin>>n>>x;
    int ara[n];
    for(int i=0;i<n;i++){
        cin>>ara[i];
    }
    sort(ara,ara+n);
    for(int i=0;i<n;i++){
        cc += ara[i];
        if(cc>x){
            break;
        }
        else{
            count++;
        }
    }
    cout<<count<<"\n";
}

int main(){
    int tests;
    scanf("%d",&tests);
    while(tests--){
        run_case();
    }
}