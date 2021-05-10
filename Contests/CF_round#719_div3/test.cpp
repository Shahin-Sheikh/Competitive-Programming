#include <bits/stdc++.h>
using namespace std;
void run_case(){
    int n,count1=0;
    cin>>n;
    for(int i=1;i<=n;i++){
        if(i%10 <= 1 ){
            count1 = count1 + 1;
        }
    }
    cout<<count1<<"\n";

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