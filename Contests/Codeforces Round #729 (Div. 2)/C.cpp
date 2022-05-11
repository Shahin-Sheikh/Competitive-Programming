#include <bits/stdc++.h>
#include <iostream>
#define ll long long int
#define mod 1000000007
using namespace std;
 

l f2(l x,l y ){
    while(y){
        l res=y;
        y=x%y;
        x=res;
    }
    return x;
}

 
 l f1(l a,l b,l c){

    l m=0,n,r;
    if(a==0){
        return 0;
    }

    else{
    
     n=b/f2(b,c);

     r=a/n;

    m=(((a-r)%mod)*b)%mod;

    m+=(f1(r,b+1,c*n))%mod;

    m=m%mod;

         return m;
    }
}
 
 
int main(){
    
   
   ios_base::sync_with_stdio(false); cin.tie(NULL);

    l tests;
    
	cin>>tests;
    for (l i = 0; i < tests; ++i){
        l n,final=0,rt=0;

        cin>>n;
    final=f1(n,2,1);
    rt++;

    cout<<final<<endl;
      
    }
    return 0;
}