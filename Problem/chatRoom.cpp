#include<bits/stdc++.h>
using namespace std;

int main(){
    string str,str1="hello";
    cin>>str;
    int j=0, count=0;
    for(int i=0;i<str.length();i++){
        if(str[i]==str1[j]){
            j++;
            count++;
        }
        if(count==5){
            break;
        }
    }
    if(count==5){
        cout<<"YES\n";
    }
    else{
        cout<<"NO\n";
    }
    return 0;
}