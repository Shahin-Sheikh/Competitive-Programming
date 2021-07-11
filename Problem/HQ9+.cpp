#include<bits/stdc++.h>
using namespace std;

int main(){
    string str;
    cin>>str;
    int flag = 0;
    for(int i=0;i<str.size();i++){
        if(str[i] == 'H' || str[i] == 'Q' || str[i] == '9'){
            cout<<"YES\n";
            return 0;
        }
    }
    cout<<"NO\n";
    return 0;
}