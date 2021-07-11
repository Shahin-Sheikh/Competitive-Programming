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
void run_case(){
        string str;
		cin >> str;
        vector<bool> n(26,0);

        for(char a : str) {
            n[a-'a']=1;
        }

        string r = "YES";

        for (int i = 0; i < str.size(); ++i)
        {
            if(n[i]!=1) 
            {
                r = "NO";

            }
        }

        for (int i = 1; i <str.size()-1; ++i)
        {
            if(str[i]>str[i-1] && str[i]>str[i+1]){
                r="NO";
            } 
        }
        
        cout << r << "\n";
}

//=========== Main Function ==============//
int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    int tests;
    cin>>tests;
    while(tests--){
        run_case();
    }
	return 0;
}