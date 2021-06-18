#include <bits/stdc++.h>
#include <iostream>
#define ll long long int
#define mod 1000000007
#define endl        "\n"
#define pb          push_back
#define max2(a,b)   ((a<b)?b:a)
#define max3(a,b,c) max2(max2(a,b),c)
#define min2(a,b)   ((a>b)?b:a)
#define min3(a,b,c) min2(min2(a,b),c)
 
 
using namespace std;

void solve(){
	
	ll n,k,p,num,t,total=0;

    vector<vector<char> > vec; 

    cin>>n>>k;
    
    for (ll i = 0; i < n; i++) { 
        
        vector<char> v1; 
  
        for (ll j = 0; j < k; j++) { 
           cin>>num;				/// n=row ; k=col
            v1.push_back(num); 
            
        } 
  
        
        vec.push_back(v1); 

        

    } 



    for (int i = 0; i < vec.size(); i++)
    {
        for (int j = 0; j < vec[i].size(); j++)  /// print 2d vector
        {
            cout << vec[i][j] << " ";
        }   
        cout << endl;
    } 


    cout<<"newwwww"<<endl;


}
 

 
 
 
 
int main(){
    
   
   ios_base::sync_with_stdio(false); cin.tie(NULL);

   ll t;
	cin>>t;
	for (ll iii = 0; iii < t; ++iii)
	{	
    	
    	solve();
	}
    

    
    return 0;
}