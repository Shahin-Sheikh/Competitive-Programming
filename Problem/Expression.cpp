#include<bits/stdc++.h>
using namespace std;

int main(){
    int a,b,c,re=0,res=0,res1=0,res2=0,res3=0,res4=0;
    cin>>a>>b>>c;
    re = a+b+c;
    res = (a+b)*c;
    res1 = a*(b+c);
    res2 = a*b*c;
    res3 = a+b*c;
    res4 = a*b+c;
    cout<<max(re,max(res,max(res1,max(res2,max(res3,res4)))));
    return 0;
}