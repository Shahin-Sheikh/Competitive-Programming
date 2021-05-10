#include <bits/stdc++.h>
#include<string> 
using namespace std;
int countDigit(long long n)
{
    int count = 0;
    while (n != 0)
    {
        n = n / 10;
        ++count;
    }
    return count;
}
void run_case(){
    long long n,count1=0;
    int res = 0;
    cin>>n;
    if(countDigit(n) == 1){
        cout<<n<<"\n";
    }
    else if(countDigit(n) <=2 ){
            for(int i=1;i<=n;i++){
        if(i%10 <= 1 ){
            count1 = count1 + 1;
        }
    }
    cout<<count1<<"\n";
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