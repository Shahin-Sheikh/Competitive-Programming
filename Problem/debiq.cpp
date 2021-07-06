#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin>>n;
    int ara[n];
    for(int i=0;i<n;i++){
        cin>>ara[i];
        if(ara[i]%2==0){
            if(ara[i+1]%2==1){
                cout<<i+1+1<<"\n";
                break;
            }
    
            else{
                continue;
            }
        }
        else{
            if(ara[i+1]%2==0){
                cout<<i+1+1<<"\n";
                break;
            }
            
            else{
                continue;
            }
        }
    }
    return 0;
}