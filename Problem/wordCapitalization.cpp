#include <bits/stdc++.h>

using namespace std;

int main()
{
    string str;
    cin>>str;
    for(int i=0;i<str.length();i++){
        if(str[0]>=97){
            str[0] -= 32;
        }
        cout<<str[i];
    }
    return 0;
}