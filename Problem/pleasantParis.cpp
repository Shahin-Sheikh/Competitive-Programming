#include<bits/stdc++.h>
typedef long long int ll;
using namespace std;

void run_case(){
        int n;
        cin >> n;
        ll a[n+1];
 
        for (int i = 1; i < n+1; i++)
        {
            cin>>a[i];
        }
        
        int ans = 0;
        for (int i = 1; i <= n; i++)
        {
            for (int j = a[i] - i; j <= n; j += a[i])
            {
                if (j >= 0)
                    if (a[i] * a[j] == i + j && i < j)
                        ans++;
            }
        }
        cout << ans << endl;
}
int main(){
    int tests;
    cin>>tests;
    while(tests--){
        run_case();
    }
    return 0;
}