#include <bits/stdc++.h>
using namespace std;

void tr(){
   vector<int> x;
   int a,b,c,d,cal,cal1,sum=0;
   cin>>a>>b>>c>>d;
   if(a>=b){
       cal = a;
   }
   else{
       cal = b;
   }
   if(c>=d){
       cal1 = c;
   }
   else{
       cal1 = d;
   }

    x.push_back(a);
	x.push_back(b);
	x.push_back(c);
	x.push_back(d);

	sort(x.begin(), x.end(),greater<int>());

    if(x[0] == cal || x[1] == cal){
	    sum++;
	}
	if(x[0] == cal1 || x[1] == cal1){
		sum++;
	}

	if(sum == 2){
		cout<<"YES\n";
	}

	else{
		cout<<"NO\n";
	}
}

int main(){
    ios_base::sync_with_stdio(false); cin.tie(NULL);
    int tests;
    cin>>tests;
    while (tests--){
        tr();
    }
    return 0;
}