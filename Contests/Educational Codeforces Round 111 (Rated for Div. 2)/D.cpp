//implement binary search
//AC

#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef pair<int,int> pii;
typedef pair<ll,ll> pll;
typedef vector<int> vi;
typedef vector<ll> vll;

#define X first
#define Y second
#define mp make_pair
#define pb push_back
#define all(c) begin(c), end(c)
#define mem(c,v) memset(c, v, sizeof c)
#define uni(c) c.resize(distance(c.begin(), unique(all(c))))

#define rep(i,n) for(ll i = 0, _n = (n); i < _n; i++)

#define rep1(i,a,b) for(ll i = a, _b = (b); i <= _b; i++)
#define rep2(i,b,a) for(ll i = b, _a = (a); i >= _a; i--)

#define mem0(m) memset(m, 0, sizeof m)
#define memb(m) memset(m, false, sizeof m)
#define memi(m) memset(m, 0, sizeof m)

#define inf 1001001001

#define read(a) a=getint()
#define print(a) printf("%d", a)
#define dbg(x) cout << (#x) << " = " << (x) << endl

#define rd(x) scanf("%d", &x)
#define rd2(x,y) scanf("%d%d", &x, &y)
#define rd3(x,y,z) scanf("%d%d%d", &x, &y, &z)
#define rd4(a,b,c,d) scanf("%d%d%d%d", &a, &b, &c, &d)

#define rd1( x ) scanf( "%" __STRING(x) "s", s )

const int dx[] = {0, 0, 1, -1};
const int dy[] = {1, -1, 0, 0};

const int N = 100005;

int n, m, a[N], b[N], c[N], d[N], ans;

int main() {
    read(n); read(m);
    rep(i,n) read(a[i]);
    rep(i,m) read(b[i]);
    rep(i,m) read(c[i]);
    rep(i,m) read(d[i]);
    sort(all(a));
    sort(all(b));
    sort(all(c));
    sort(all(d));
    int i = 0, j = 0, k = 0;
    while(i < n && j < m && k < m) {
        if(a[i] <= b[j]) {
            ans += c[k];
            i++;

        } else if(b[j] <= a[i]) {
            ans += d[k];
            j++;

        } else {
            k++;
        }
    }
    print(ans);
    return 0;
}



