#include<bits/stdc++.h>
using namespace std;

int main(){
    string str[100];
    for(int i=0;i<100;i++){
        cin>>str[i];
        if(str[i] == "H" || str[i] == "Q" || str[i] == "9"){
            cout<<"YES\n";
            break;
        }
        else{
            cout<<"NO\n";
            break;
        }
    }
    return 0;
}