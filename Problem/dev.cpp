#include<bits/stdc++.h>
using namespace std;
int debasish(int n){
    if(n%2==0){
        n = n/2;
        cout<<n<<" ";
        if(n>1){
            debasish(n);
        }
    }
    else{
        n = n*3 +1;
        cout<<n<<" ";
        if(n>1){
            debasish(n);
        }
    }
}
int main(){
    long long n;
    cin>>n;
    cout<<n<<" ";
    debasish(n);
}