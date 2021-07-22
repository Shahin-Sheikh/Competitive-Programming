#include <bits/stdc++.h>
using namespace std;

//======================== Define Start From Here =======================//
#define mp             make_pair
#define se             second
#define pb             push_back
#define fi             first
#define sz(x)          (int)((x).size())
#define sci(x)         int x;       scanf("%d", &x);
#define sciii(x, y, z) int x, y, z; scanf("%d %d %d", &x, &y, &z);
#define scii(x, y)     int x, y;    scanf("%d %d", &x, &y);
#define eprintf(...)   fprintf(stderr, __VA_ARGS__)
#define TC(x)          sci(x); while(x --)
#define debug(x)       { cerr << #x << " = " << x << endl; }

//============ Define Type ============//
typedef long long      ll;
typedef pair<int, int> ii;
typedef pair<ii, int>  iii;
typedef vector<int>    vi;
typedef vector<ii>     vii;
typedef vector<iii>    viii;

//========= Type ==========//
const   int            inf = 0;
const   double         eps = 0;
const   int            ms  = 0;
const   int            md  = 0;
//=========================== Define End Here ==========================//

//----------------------------------------------------------------------------------//

//=========== Run Case ============//
void tr(){
    ll gg,qwea, shuew, odhei;
    cin>>gg;
    vector<ll> er(gg);
    vector<ll> jk(gg);
    for(ll i=0;i<gg;i++){
        cin>>er[i];
    }
    for(ll i=0;i<gg;i++){
        cin>>jk[i];
    }
    vector<ll> dj(gg+1);
    vector<ll> mj(gg+1);
    sort(er.begin(),er.end(),greater<ll>());
    sort(jk.begin(),jk.end(),greater<ll>());
    for(ll i=1;i<=gg;i++){
        dj[i] = er[i-1];
        mj[i] = jk[i-1];
        dj[i] += dj[i-1];
        mj[i] += mj[i-1];
    }
    ll laq=0,haq=1e9;
    while(laq<haq){
        ll mud = (laq+haq)>>1;
        ll dup = (gg+mud) - (gg+mud)/4;
        ll yes = max(dup-mud,0LL);
        ll nai = min(dup,gg);
        ll ay = mud*100;
        ay += dj[yes];
        ll na = mj[nai];
        if(ay<na){
            laq = mud+1;
        }
        else{
            haq = mud;
        }
    }
    cout<<laq<<"\n";
}

//=========== Main Function ==============//
int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    int tests;
    cin>>tests;
    while(tests--){
        tr();
    }
	return 0;
}