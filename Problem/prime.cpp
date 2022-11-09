#include<iostream>
using namespace std;

int main(){
    int n,m,flag=0;
    cin>>n;
    m = n/2;
    for(int i=2;i<=m;i++){
        if(n%2==0){
            cout<<"Not prime";
            flag=1;
            break;
        }
    }
    if(flag==0){
        cout<<"Prime";
    }
    return 0;
}