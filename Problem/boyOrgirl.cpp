#include <bits/stdc++.h>

using namespace std;

int main()
{
    int count=0,pas=1;
    string str;
    cin>>str;
    int len = str.length();
    for(int i=0;i<len;i++){
        for(int j=0;j<i;j++){
            if(str[i]==str[j]){
                count++;
            }
        }
        if(count==0){
            pas++;
        }
        count = 0;
    }
    if(pas%2==0){
        cout<<"IGNORE HIM!"<<"\n";
    }
    else{
        cout<<"CHAT WITH HER!"<<"\n";
    }
    return 0;
}