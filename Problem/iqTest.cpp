#include<bits/stdc++.h>
using namespace std;

int main(){
    int n,counte=0,countd=0,index=0,index1=0;
    cin>>n;
    int x;
    for(int i=1;i<=n;i++){
        cin>>x;
        if(x%2==0){
            counte++;
            index = i;
        }
        else{
            countd++;
            index1 = i;
        }
    }
    if(counte==1){
        cout<<index<<"\n";
    }
    else if(countd==1){
        cout<<index1<<"\n";
    }
    return 0;
}