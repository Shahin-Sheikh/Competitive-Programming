#include <bits/stdc++.h>
 
using namespace std;
 
int main()
{
    int count=1;
    string str;
    cin>>str;
    int len = str.length();
    for(int i=0;i<len;i++){
        if(str[i]==str[i-1]){
            count += 1;
            if(count==7){
                cout<<"YES"<<"\n";
                return 0;
            }
        }
        else{
            count = 1;
        }
    }
    cout<<"NO"<<"\n";
    return 0;
}