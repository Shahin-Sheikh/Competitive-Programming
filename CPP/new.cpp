#include <bits/stdc++.h>

#define ll          long long int
#define mod         1000000007
#define endl        "\n"
#define pb          push_back
#define max2(a,b)   ((a<b)?b:a)
#define max3(a,b,c) max2(max2(a,b),c)
#define min2(a,b)   ((a>b)?b:a)
#define min3(a,b,c) min2(min2(a,b),c)



using namespace std;








int main(){
    ios_base::sync_with_stdio(false); cin.tie(NULL);

   l t;
   cin>>t;
    for(l i=0;i<t;i++){
      l count=0,n,p,t=0,sum=0;

          cin>>n;

      vector<l> arr(n);

       for (int j = 0; j <= n-1; ++j)
        {
        cin>>arr[j];
        }

        for (int k = 0; k <= n-1; ++k)
        {
            if(arr[k]<0){
                p=k-count;
                count++;
                t=t+p;

            }

            if(arr[k]>-1){
                sum=sum+arr[k];
            }
        }

        cout<<t<<sum<<endl;
        printf("Case %d: %d\n", case_num,count);

















  }

    return 0;
}