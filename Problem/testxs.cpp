#include<bits/stdc++.h>
using namespace std;

int main(){
    vector<int> nums;
    int n;
    cin>>n;
    int temp;
    for(int i=0;i<n;i++){
        int x;
        cin>>x;
        nums.push_back(x);
    }
    int size = nums.size();
    int count = 0;
    sort(nums.begin(), nums.end());
    for (int i = 0; i < size; i++)
    {
        if (nums[i] == nums[i + 1])
        {
            count++;
        }
    }
    if (count >= 1)
    {
        cout<<"True";
    }
    else
    {
        cout<<"False";
    }
    return 0;
}