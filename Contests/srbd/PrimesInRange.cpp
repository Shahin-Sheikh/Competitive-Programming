#include<bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef vector<int> vi;
typedef pair<int, int> ii;
typedef vector<ii> vii;
typedef set<int> si;
typedef map<string, int> msi;

// To simplify repetitions/loops, Note: define your
// loop style and stick with it!
#define REP(i, a, b) \
    for (int i = int(a); i <= int(b); i++) // a to b, and variable i is local!
#define TRvi(c, it) \
    for (vi::iterator it = (c).begin(); it != (c).end(); it++)
#define TRvii(c, it) \
    for (vii::iterator it = (c).begin(); it != (c).end(); it++)
#define TRmsi(c, it) \
    for (msi::iterator it = (c).begin(); it != (c).end(); it++)

#define INF 2000000000 // 2 billion

// If you need to recall how to use memset:
#define MEMSET_INF 127     // about 2B
#define MEMSET_HALF_INF 63 // about 1B

// memset(dist, MEMSET_INF, sizeof dist); // useful to initialize shortest path distances
// memset(dp_memo, -1, sizeof dp_memo); // useful to initialize DP memoization table
// memset(arr, 0, sizeof arr); // useful to clear array of integers

void tr(){
    ll n, m, count = 0;
    int x;
    scanf("%lld %lld", &n, &m);
    if (n <= 2)
    {
        n = 2;
        if (m >= 2)
        {
            count++;
            n++;
        }
    }

    if (n % 2 == 0)
        n++;
    for (ll i = n; i <= m; i = i + 2)
    {

        x = -1;

        for (ll j = 2; j * j <= i; ++j)
        {
            if (i % j == 0)
            {
                x = 1;
                break;
            }
        }
        if (x == -1)
        {
            if (i == 1)
                continue;
            else
                count++;
        }
    }
    printf("%lld\n", count);
    //cout << count << endl;
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    ll tests;
    scanf("%lld", &tests);
    for(ll i = 0; i < tests; i++){
        tr();
    }
    return 0;
}