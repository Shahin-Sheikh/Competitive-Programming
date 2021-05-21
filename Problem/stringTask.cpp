#include <bits/stdc++.h>

using namespace std;

int main(){
    string str,str1;
    cin>>str;
    for(int i=0;i<str.length();i++){
        if(str[i]=='A' || str[i]=='E' || str[i]=='I' || str[i]=='O' || str[i]=='U' || str[i]=='Y' || str[i]=='a' || str[i]=='e' || str[i]=='o' || str[i]=='i' || str[i]=='u' || str[i]=='y'){
            continue;
        }
        else{
            str1 += '.';
            str1 += tolower(str[i]);
        }
    }
    cout<<str1;

    return 0;
}