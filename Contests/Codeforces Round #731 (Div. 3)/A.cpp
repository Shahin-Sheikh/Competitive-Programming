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
     ll a,b,c,d,e,f,tmp,tmp1,sum,sum1,sum2,sum3,res,res1;

      cin>>a>>b>>c>>d>>e>>f;

      tmp = abs(a-c);
      tmp1 = abs(b-d);

      res = tmp+tmp1;

      sum = abs(a-e);
      sum1 = abs(c-e);
      sum2 = abs(b-f);
      sum3 = abs(d-f);

      res1 = sum+sum1+sum2+sum3;

      if(a!=c && b!=d){
        cout<<res<<"\n";
      }

      else if(res==res1){
        cout<<res+2<<"\n";
      }

      else{
        cout<<res<<"\n";
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