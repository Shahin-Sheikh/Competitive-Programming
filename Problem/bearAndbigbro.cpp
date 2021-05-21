#include <bits/stdc++.h>
 
using namespace std;
 
int main()
{
    int a,b,i=0,res=0,count=0;
    cin>>a>>b;
    for(i=0;i<b;i++){
        res = a*i;
        if(a==1 && b==1){
            cout<<1<<"\n";
        }
        else if(res>=b){
            cout<<count<<"\n";
            break;
        }
        count++;
    }
    return 0;
}