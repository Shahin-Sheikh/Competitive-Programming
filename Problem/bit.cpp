#include <bits/stdc++.h>

using namespace std;

int main(){
    int n,x=0;
    cin>>n;
    string str;
    for(int i=0;i<n;i++){
        cin>>str;
        if(str[1]=='+'){
            ++x;
        }
        else{
            --x;
        }
    }
    cout<<x<<"\n";
    return 0;
}