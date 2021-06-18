#include<bits/stdc++.h>
using namespace std;

int main(){
    string str;
    cin>>str;
    int l = str.length();
    for(int i=0;i<l;i++){
        if(str[l-i]<97){
            cout<<str[i] + 32<<"\n";
        }
        else if(str[0]<97 && str[l-i]>=97){
            cout<<str[i]<<"\n";
        }
    }
    return 0;
}