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
    ll number,member,me,to;
    cin>>number>>member;
    ll array[number][member];
    for(ll i=0;i<number;i++){
        for(ll j=0;j<member;j++)
            array[i][j]=0;
    }
    array[0][0]=1;
    array[number-1][0]=1;
    array[0][member-1]=1;
    array[number-1][member-1]=1;
    if(number%2==0){
        for(int i=3;i<number;i+=2){
            array[i][0]=1;
            array[i][member-1]=1;
        }
    }
    else{
        for(int i=2;i<number;i+=2){
            array[i][0]=1;
            array[i][member-1]=1;
        }
    }
    if(member%2==0){
        for(int i=3;i<member;i+=2){
            array[0][i]=1;
            array[number-1][i]=1;
        }
    }
    else{
        for(int i=2;i<member;i+=2){
            array[0][i]=1;
            array[number-1][i]=1;
        }
    }
    for(ll i=0;i<number;i++){
        for(ll j=0;j<member;j++)
            cout<<array[i][j];
        cout<<endl;
    }
    cout<<endl;
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