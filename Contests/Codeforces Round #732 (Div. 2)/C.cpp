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

int minSwaps(int ara[], int z)
{
    pair<int, int> arrPos[z];
    for (int i = 0; i < z; i++)
    {
        arrPos[i].first = ara[i];
        arrPos[i].second = i;
    }

    sort(arrPos, arrPos + z);
 
    vector<bool> vis(z, false);
 
    int ans = 0;
 
    for (int i = 0; i < z; i++)
    {

        if (vis[i] || arrPos[i].second == i)
            continue;
 
        int cycle_size = 0;
        int j = i;
        while (!vis[j])
        {
            vis[j] = 1;
 
            j = arrPos[j].second;
            cycle_size++;
        }
 
        if (cycle_size > 0)
        {
            ans += (cycle_size - 1);
        }
    }
    return ans;
}
//=========== Run Case ============//
void tr(){
    int n,res=0;
    cin>>n;
    int ara[n];
    for(int i=0;i<n;i++){
        cin>>ara[i];
    }
    int z = (sizeof(ara) / sizeof(int));

    res =  minSwaps(ara, z);
    if(n%2==0){
        cout<<"YES\n";
    }
    else{
        cout<<"NO\n";
    }
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