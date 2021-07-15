#include <bits/stdc++.h>
using namespace std;

void t(){
    int n,res=0;
    cin>>n;
    int ara[n];
    for(int i=0;i<n;i++){
        cin>>ara[i];
    }
    if(n%2==0){
        cout<<"YES\n";
    }
    else{
        cout<<"NO\n";
    }
}

int main() {
    int f;
    cin>>f;
    while(f--){
        t();
    }
	return 0;
}