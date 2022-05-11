#include <bits/stdc++.h>
#define ll          long long int
#define endl        "\n"
#define mod 1000000007

using namespace std;

clock_t startTime;
double getCurrentTime() {
    return (double)(clock() - startTime) / CLOCKS_PER_SEC;
}

l palindromeChecker(l input){
    l k, val, d, temp = 0;

     k=input;

     k = val;

     do
     {
         d = val % 10;
         temp = (temp * 10) + d;
         val = val / 10;
     } while (val != 0);

    

     if (k == temp){
         return 1;
     }
     else{
         return 0;
     }

    
}

l power(l base,l pow){
    l res=1;
    for (int i = 1; i <=pow; ++i)
    {
        res=res*base;
    }

    return res;
}

l cal(l a){
    l final=0,val;

    for (int i = 0; i < INT_MAX; ++i)
    {
        l temp=i,res=0;
        if(final==a){
            break;
        }
        while(temp !=0){
            temp/=10;
            res++;
        }

        if(res%2 !=0){
            if(palindromeChecker(i)==1){
                val=i;
                final++;

            }
        }
    }

    return val;

}
bool check(l array[], l n)
{   
    bool flag = 0;

    for(l i = 0; i < n - 1; i++)      
    {         
        if(array[i] != array[i + 1])
            flag = 1;
    }

    return flag;
}

l gcd(l a, l b)
{
    if (a == 0)
        return b;
    return gcd(b % a, a);
}

int main(){
	ios_base::sync_with_stdio(false); cin.tie(NULL);

	l t;
    cin>>t;

   
   for (int iii = 0; iii < t; ++iii)
   {    

        l s,count=0;
        cin>>s;

        l inp[s];
        l result[s];

        for (l i = 0; i < s; ++i)
        {
            cin >> inp[i];
        }


        if(check(inp,s)==0){
           cout<<0<<endl; 
        }
        else{
            for (l i = 0; i < s-1; ++i)
            {
                result[i]=gcd(inp[i],inp[i+1]);
            }

            result[s-1]=gcd(inp[s-1],inp[0]); 

            count++;
            while(check(result,s)!=0){
               for (l i = 0; i < s-1; ++i)
            {
                result[i]=gcd(result[i],result[i+1]);
            }

            result[s-1]=gcd(result[s-1],result[0]); 

            count++;
            }

            

            
            cout<<count;
        
cout<<endl;


            
        }

        

    

    
    
   }
	
    
    return 0;
}