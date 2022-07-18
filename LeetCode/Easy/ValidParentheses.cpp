#include<bits/stdc++.h>
using namespace std;

int main(){
    string str;
    cin>>str;
    int n = str.length();
    for(int i=0;i<n;i++){
        if(str[i]=='(' || str[i]=='{' || str[i]=='['){
            stack<char> s;
            s.push(str[i]);
            for(int j=i+1;j<n;j++){
                if(str[j]=='(' || str[j]=='{' || str[j]=='['){
                    s.push(str[j]);
                }
                else if(str[j]==')' || str[j]=='}' || str[j]==']'){
                    if(s.empty()){
                        cout<<"NO"<<endl;
                        return 0;
                    }
                    else if(s.top()=='(' && str[j]==')' || s.top()=='{' && str[j]=='}' || s.top()=='[' && str[j]==']'){
                        s.pop();
                    }
                    else{
                        cout<<"NO"<<endl;
                        return 0;
                    }
                }
            }
        }
    }
}