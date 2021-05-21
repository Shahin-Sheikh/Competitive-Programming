#include <bits/stdc++.h>
 
using namespace std;
 
int main()
{
    int k,n,w,sum=0,hold=0,res=0;
    cin>>k>>n>>w;
    for(int i=1;i<=w;i++){
        hold = k*i;
        sum += hold;
    }
    res = sum - n;
    if(res<0){
        cout<<0<<"\n";
    }
    else{
        cout<<res<<"\n";
    }
    return 0;
}