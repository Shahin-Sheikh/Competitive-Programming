#include <iostream>
#include <string>
#include <algorithm>
#include <map>
#include <vector>
#include <unordered_set>
#include <cctype>
#define ll long long int
#define endl "\n"
using namespace std;

int32_t main()
{

    ios::sync_with_stdio(false);
    cin.tie(0);

    ll n, k, l, c, d, p, nl, np;

    cin >> n >> k >> l >> c >> d >> p >> nl >> np;

    ll totalml = k * l;
    ll var1 = totalml / nl;
    ll lime = c * d;
    ll salt = p / np;

    ll res = min(var1, min(lime, salt)) / n;

    cout << res << endl;

    return 0;
}
