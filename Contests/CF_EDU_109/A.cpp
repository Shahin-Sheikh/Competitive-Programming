#include <bits/stdc++.h>
using namespace std;
void run_case(){
    ios_base::sync_with_stdio(0);cin.tie(0);
    int k,res=0;
    cin>>k;
    res = 100/k;
    if(res > k){
        cout<<"100"<<"\n";
    }
    else{
        cout<<res<<"\n";
    }
}
int main()
{
  ios_base::sync_with_stdio(0);cin.tie(0);
  int tests; 
  cin>>tests;
  while (tests--)
    run_case();
  return 0;
}