#include<bits/stdc++.h>
#include<stdio.h>
#include<math.h>
#include <iomanip>
using namespace std;
void run_case(){
    long long int n;
    long long int x=1;
    cin>>n;
    int ara[n];
    for(int i = 0; i < n; i++){
        cin>>ara[i];
        x = x*ara[i];
    }
    int absulate = abs(sqrt(x));
    if(sqrt(x) == absulate){
        cout<<"NO\n";
    }
    else if(sqrt(x) != absulate){
        cout<<"YES\n";
    }    
}
int main() {
	using namespace std;
	ios_base::sync_with_stdio(false), cin.tie(nullptr);
    int tests;
    cin>>tests;
    for(int i = 0; i < tests; i++){
        run_case();
    }
	return 0;
}