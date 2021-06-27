#include <bits/stdc++.h>
using namespace std;

void run_case(){
    int n,x,t,sum=0,dis=0,sub=0,cdis=0,worst=0;
    cin>>n>>x>>t;
    if(x>1){
        for(int i=0;i<n*2;i=i+x){
        sum = i;
    }
    while(sum != x){
        dis = dis + x;
        sum = sum - x;
    }
    cout<<dis+1<<"\n";
    }
    else if(x==1){
        for(int i=0;i<n;i++){
        sum = i;
    }
    while(sum != x){
        dis = dis + x;
        sum = sum - x;
    }
    cout<<dis+1<<"\n";
    }
}

int main(){
    ios_base::sync_with_stdio(false); cin.tie(NULL);
    int tests;
    cin>>tests;
    while (tests--){
        run_case();
    }
    return 0;
}
