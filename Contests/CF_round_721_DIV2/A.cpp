#include <bits/stdc++.h>
//typedef long long ll;
#define ll          long long int
using namespace std;

int main(){
	ios_base::sync_with_stdio(false); cin.tie(NULL);
    l t;
    cin>>t;
    for(l i=0;i<t;i++){
    	l n,s;
		cin>>n>>s;
		l count=n;
		while(count !=0){
			 count = count & (n-1);
			s=n-1;
			n--;
		}
		cout<<s<<"\n";
  	}
    return 0;
}