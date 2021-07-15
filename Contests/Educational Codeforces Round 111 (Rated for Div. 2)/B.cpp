#include <bits/stdc++.h>
using namespace std;
#define mp             make_pair
typedef long long      ll;

void sol(){
      ll sh,li,oi,jhd,fhdj;
      cin>>sh>>li>>oi;
      ll hjg;
      string ui;
      cin>>ui;
      ll yu;
      ll ans= sh*li + sh*oi;

    if(oi<0)
    {
        ll tm=0,c=0;
        char qw=ui[0];
        char ty=ui[0];
        for(auto run:ui)
        {
            if(run!=qw && run!=ty)
            {
                tm++;
             } 

              qw=run;
        }

        tm+=1;
        yu=sh*li + tm*oi;
        cout<<yu<<"\n";
    }
    else{
        cout<<ans<<"\n";
    }
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin>>t;
    while(t--){
        sol();
    }
	return 0;
}