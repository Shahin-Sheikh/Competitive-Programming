
#include<bits/stdc++.h>
#include<stdio.h>
using namespace std;

int minSwaps(int arr[], int n)
{
    pair<int, int> arrPos[n];
    for (int i = 0; i < n; i++)
    {
        arrPos[i].first = arr[i];
        arrPos[i].second = i;
    }

    sort(arrPos, arrPos + n);
 
    vector<bool> vis(n, false);
 
    int ans = 0;

    for (int i = 0; i < n; i++)
    {

        if (vis[i] || arrPos[i].second == i)
            continue;

        int cycle_size = 0;
        int j = i;
        while (!vis[j])
        {
            vis[j] = 1;

            j = arrPos[j].second;
            cycle_size++;
        }
        if (cycle_size > 0)
        {
            ans += (cycle_size - 1);
        }
    }
    return ans;
}
int main()
{
    int T,N,psum=0; scanf("%d", &T);
    for (int case_num = 1; case_num <= T; case_num ++) {
       scanf("%d", &N);
       int arr[N];
       for(int i=0;i<N;i++){
           cin>>arr[i];
       }
       int n = sizeof(arr)/sizeof(arr[0]);
       minSwaps(arr,n);
       for(int i=0;i<N;i++){
            if(arr[i]>0){
            psum += arr[i];
           }
       }
        //int max_sum = maxSubArraySum(arr, n);
        int move = minSwaps(arr,n);
        cout << "Case" <<" "<< case_num << ":" << " " << psum << " " << move << '\n';
        psum = 0;
	}
    return 0;
}