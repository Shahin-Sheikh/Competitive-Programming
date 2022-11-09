#include<bits/stdc++.h>
using namespace std;

int main(){
    string str;
    cin>>str;
    string str1;
    cin>>str1;
    sort(str.begin(), str.end());
    sort(str1.begin(), str1.end());
    if(str == str1){
        cout<<"True";
    }
    else{
        cout<<"False";
    }
}