#include <bits/stdc++.h>
#include <iostream>
#define ll long long int
#define mod 1000000007
#define endl "\n"
#define pb push_back
#define max2(a,b)   ((a<b)?b:a)
#define max3(a,b,c) max2(max2(a,b),c)
#define min2(a,b)   ((a>b)?b:a)
#define min3(a,b,c) min2(min2(a,b),c)
#define ch() getchar()


using namespace std;

template<typename T>void read(T&x){
    static char c;static ll f;
    for(c=ch(),f=1;c<'0'||c>'9';c=ch())if(c=='-')f=-f;
    for(x=0;c>='0'&&c<='9';c=ch())x=x*10+(c&15);x*=f;
}

const int maxn = 1e5 + 7;

const int INF = 1000000009;
int ABS(int a){return max(a, -a);}
ll ABS(ll a){return max(a, -a);}
double ABS(double a){return max(a, -a);}


double Means(int sum, int N)
{
    
    double d = (double)sum / (double)N;
 
    
    
       return d;
}
 
int smallestDivisor(int n)
{
    
    if (n % 2 == 0)
        return 2;
 
   
    for (int i = 3; i * i <= n; i += 2) {
        if (n % i == 0)
            return i;
    }
 
    return n;
}

ll gcd(ll x,ll y ){
    while(y){
        ll res=y;
        y=x%y;
        x=res;
    }
    return x;
}

 
 ll res(ll a,ll b,ll c){

    ll temp=0,q,r,ver=0;
    if(a==0){
        ver++;
        return 0;
    }

    else{
    
     q=b/gcd(b,c);

     r=a/q;

    temp=(((a-r)%mod)*b)%mod;

    temp+=(res(r,b+1,c*q))%mod;

    temp=temp%mod;

         return temp;
    }
}
 
 
int main(){
    
   
   ios_base::sync_with_stdio(false); cin.tie(NULL);

   vector<ll>store;
        ll t;
    
	cin>>t;
    for (ll iii = 0; iii < t; ++iii){
        ll n,count=0;

        cin>>n;

    Means(n, count);
    count=res(n,2,1);

    cout<<count<<endl;



    

      
    }

    
    

    
    return 0;
}