#include <bits/stdc++.h>
#define ll  long long int
using namespace std;


void myf1(ll *m, ll *n)
{
    ll kj = *m;
    *m = *n;
    *n = kj;
}
 
void z(ll nam[], ll s)
{
    ll l = 0, r = s-1;
    while (l < r)
    {
         while (nam[l]%2 == 0 && l < r)
            l++;
 
        while (nam[r]%2 == 1 && l < r)
            r--;
 
        if (l < r)
        {
            myf1(&nam[l], &nam[r]);
            l++;
            r--;
        }
    }
}
ll myf(ll o, ll p)
{
    if (p == 0)
        return o;
    return myf(p, o % p);
     
}

int main(){
	ios_base::sync_with_stdio(false); cin.tie(NULL);

    ll tests;
	cin>>tests;
	for (ll i = 0; i < tests; ++i)
	{	

		ll s,sum=0;
		cin>>s;

		ll ara[s];

		for (int i = 0; i < s; ++i) {
        cin>>ara[i];
    }
    	
		z(ara, s);
		for (int i = 0; i < s-1; ++i)
		{
			for (int j = i+1; j < s; ++j)
			{
				if(myf(ara[i],2*ara[j])>1){
					sum++;
				}
			}

			
		}

		cout<<sum<<endl;
		
	}
    return 0;
}