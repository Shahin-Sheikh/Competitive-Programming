/*Note that if the sum of all the weights is x, the scale will always explode and the answer will be NO. Otherwise, we claim there is always an answer.

Basically, at each point, we choose an arbitrary gold piece to add to the scale so that it doesn't explode. There is always a valid gold piece to add because the weights are distinct.

For example, we can try adding piece 1, 2, …, n, in that order. Suppose we are currently considering the i-th piece. If we can add it to the scale without an explosion, we do it. If we can't, then we can just first add piece i+1, and then piece i (wi≠wi+1 because weights are distinct). i+1 must be less than or equal to n because otherwise, the total sum of the weights would be x.

Time complexity for each test case: O(n)*/
#include <bits/stdc++.h>
using namespace std;

void run_case(){
  
}

int main(){
    ios_base::sync_with_stdio(false); cin.tie(NULL);
    int tests;
    cin>>tests;
    while (tests--){
        run_case();
    }
    return 0;
}