#include <bits/stdc++.h>
using namespace std;
int smallestDivisor(int n)
{
    // if divisible by 2
    if (n % 2 == 0)
        return 2;
 
    // iterate from 3 to sqrt(n)
    for (int i = 3; i * i <= n; i += 2) {
        if (n % i == 0)
            return i;
    }
 
    return n;
}
void tr(){
    int n,sum=0;
    cin>>n;
    for(int i=1;i<=n;i++){
         cout<<"Samallest Divisor of"<<i<<"is"<<smallestDivisor(i)<<"\n";
    }

}

int main(){
    ios_base::sync_with_stdio(false); cin.tie(NULL);
    int tests;
    cin>>tests;
    while (tests--){
        tr();
    }
    return 0;
}