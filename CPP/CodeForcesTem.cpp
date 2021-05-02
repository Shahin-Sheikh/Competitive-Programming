#include<bits/stdc++.h>
void run_case(){
    using namespace std;
    ios_base::sync_with_stdio(false), cin.tie(nullptr);
    int n;
    cin>>n;
    int ara[n];
    for(int i = 0; i < n; i++){
        cin>>ara[i];
        cout<<ara[i]<<"\n";
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