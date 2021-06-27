#include<bits/stdc++.h>
using namespace std;

int main(){
    int n,res=1;
    cin>>n;
    res = n*1.08;
    if(res<206){
        cout<<"Yay!\n";
    }
    else if(res == 206){
        cout<<"so-so\n";
    }
    else if(res>206){
        cout<<":(\n";
    }
    return 0;
}