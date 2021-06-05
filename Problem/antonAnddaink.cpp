#include<iostream>
using namespace std;

int main(){
    int n,count=0,count1=0;
    cin>>n;
    char str[n];
    for(int i=0;i<n;i++){
        cin>>str[i];
        if(str[i]=='D'){
            count++;
        }
        else if(str[i]=='A'){
            count1++;
        }
    }
    if(count>count1){
        cout<<"Danik\n";
    }
    else if(count<count1){
        cout<<"Anton\n";
    }
    else if(count == count1){
        cout<<"Friendship\n";
    }
    return 0;
}