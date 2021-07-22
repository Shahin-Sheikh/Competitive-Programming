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
    ll hj,lk,oi,lo,mm,hdjuf;
    cin>>hj>>lk;
    ll ara[hj][lk];
    for(ll i=0;i<hj;i++){
        for(ll j=0;j<lk;j++)
            ara[i][j]=0;
    }
    ara[0][0]=1;
    ara[hj-1][0]=1;
    ara[0][lk-1]=1;
    ara[hj-1][lk-1]=1;
    if(hj%2==0){
        for(int i=3;i<hj;i+=2){
            ara[i][0]=1;
            ara[i][lk-1]=1;
        }
    }
    else{
        for(int i=2;i<hj;i+=2){
            ara[i][0]=1;
            ara[i][lk-1]=1;
        }
    }
    if(lk%2==0){
        for(int i=3;i<lk;i+=2){
            ara[0][i]=1;
            ara[hj-1][i]=1;
        }
    }
    else{
        for(int i=2;i<lk;i+=2){
            ara[0][i]=1;
            ara[hj-1][i]=1;
        }
    }
    for(ll i=0;i<hj;i++){
        for(ll j=0;j<lk;j++)
            cout<<ara[i][j]<<"\n";
    }
    cout<<"\n";

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