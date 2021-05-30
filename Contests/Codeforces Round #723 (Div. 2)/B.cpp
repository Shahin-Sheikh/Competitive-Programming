#include <bits/stdc++.h>
using namespace std;

void run_case(){
    int x,div=0,mul=1,sub=0;
    cin>>x;
    div = x/11;
    mul = abs(div)*11;
    sub = x-mul;
    if(mul==x || sub==1){
        cout<<"YES\n";
    }
    else{
        cout<<"NO\n";
    }

}
int main()
{
  ios_base::sync_with_stdio(0);cin.tie(0);
  int tests; 
  cin>>tests;
  while (tests--){
      run_case();
  }
  return 0;
}