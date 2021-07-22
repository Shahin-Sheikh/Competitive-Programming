/*Note that if the sum of all the weights is x, the scale will always explode and the answer will be NO. Otherwise, we claim there is always an answer.

Basically, at each point, we choose an arbitrary gold piece to add to the scale so that it doesn't explode. There is always a valid gold piece to add because the weights are distinct.

For example, we can try adding piece 1, 2, …, n, in that order. Suppose we are currently considering the i-th piece. If we can add it to the scale without an explosion, we do it. If we can't, then we can just first add piece i+1, and then piece i (wi≠wi+1 because weights are distinct). i+1 must be less than or equal to n because otherwise, the total sum of the weights would be x.

Time complexity for each test case: O(n)*/
#include <bits/stdc++.h>
using namespace std;

void tr(){
  int n,x;
  int w[101];
  cin>>n>>x;
  int sum=0;
  for (int i=0;i<n;i++){
    cin>>w[i];
    sum+=w[i];
  }
  //if the sum is x, we cannot avoid the explosion
  if (sum==x){
    cout<<"NO"<<endl;
    return;
  }
  cout<<"YES"<<endl;
  //otherwise, the answer always exists
  //we will keep adding elements from left to right
  //if we can't add element i, we add element i+1 first by swapping the two
  for (int i=0;i<n;i++){
    if (x==w[i]){
      //i+1 will always be less than n because otherwise, the total sum would be x
      swap(w[i],w[i+1]);
    }
    cout<<w[i]<<' ';
    x-=w[i];
  }
  cout<<endl;
  return;
}

int main(){
  int tests;
  cin>>tests;
  while (tests--)
    tr();
  return 0;
}