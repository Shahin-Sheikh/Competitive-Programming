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
    bool seu(ll hin, ll hin1, ll hin3){
        if(hin+hin3<hin1){
            return true;
        }
        return false;
    }
    bool seu1(ll hin, ll hin1, ll hin3){
        if(hin1+hin3<hin){
            return true;
        }
        return false;
    }
    ll seu2(vector<ll> & ara){
        ll sol = 9;
        ll kl1 = 0; 
        ll kl2 = 0;
        for(ll i=1;i<10;i+=2){
            kl1 += ara[i-1];
            ll mine = (10-i-1)/2;
            mine++;
            if(seu1(kl1,kl2,mine) or seu(kl1,kl2,mine-1)){
                sol=i-1;
                break;
            }
            kl2 += ara[i];
            mine--;
            if(seu1(kl1,kl2,mine) or seu(kl1,kl2,mine)){
                sol=i;
                break;
            }
        }
        return sol+1;
    }
    void tr(){
        vector<ll> ara(10);
        vector<ll> ara2(10);
        string str;
        cin>>str;
        for(ll i=0;i<10;i++){
            if(str[i]=='?'){
                if(i & 1){
                    ara[i]=0;
                }
                else{
                    ara[i]=1;
                }
            }
            else if(str[i]=='1'){
                ara[i]=1;
            }
            else{
                ara[i]=0;
            }
        }
        for(ll i=0;i<10;i++){
            if(str[i]=='?'){
                if(i & 1){
                    ara2[i]=1;
                }
                else{
                    ara2[i]=0;
                }
            }
        else if(str[i]=='1'){
            ara2[i]=1;
        }
        else{
            ara2[i]=0;
        }
    }
    cout<<min(seu2(ara),seu2(ara2))<<"\n";
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