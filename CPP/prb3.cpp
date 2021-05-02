#include <bits/stdc++.h>
#include<stdio.h>

using namespace std;


int main(){
    int T;scanf("%d", &T);
	for (int case_num = 1; case_num <= T; case_num ++) {
      int count=0,n,p,s=0,sum=0;

          cin>>n;

      vector<int> arr(n);

       for (int j = 0; j <= n-1; ++j)
        {
        cin>>arr[j];
        }

        for (int k = 0; k <= n-1; ++k)
        {
            if(arr[k]<0){
                p=k-count;
                count++;
                s=s+p;

            }

            if(arr[k]>-1){
                sum=sum+arr[k];
            }
        }
         printf("Case %d: %d %d\n", case_num,sum,s);

  }

    return 0;
}