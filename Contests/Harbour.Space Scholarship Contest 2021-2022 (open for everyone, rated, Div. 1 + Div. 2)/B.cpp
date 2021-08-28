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
        string str,s;
        bool t = 0;
        cin>>str;
        cin>>s;
        for(int iii = 0; iii < str.length(); iii++){
            for(int jjj = 0; jjj < s.length(); jjj++){
                if(str[iii] == s[jjj]){
                    int ik;
                    int il;
                    int iz = 0;
                    for(ik = jjj; ik >=0; ik--){
                        if(iii - iz < 0)
                        break;
                        if(s[ik]!=str[iii-iz])
                        break;
                        iz++;
                    }
                    iz = 0;
                    for(il = jjj; il < s.length(); il++){
                        if(iii - iz < 0){
                            break;
                        }
                        if(s[il] != str[iii-iz]){
                            break;
                        }
                        iz++;
                    }
                    if(ik == -1 && il == s.length()){
                        t = 1;
                    }
                }
                if(t == 1){
                    break;
                }
            }
            if(t == 1){
                break;
            }
        }
        if(!t){
            cout<<"NO\n";
        } 
        else{
            cout<<"YES\n";
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