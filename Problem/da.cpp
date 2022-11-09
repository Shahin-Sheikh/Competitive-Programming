#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin>>n;
    int result = 1;
    while(n>0){
        int digit = n%10;
        result *= digit;
        n /= 10;
    }
    cout<<result<<endl;
    return 0;
}