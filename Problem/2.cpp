#include <bits/stdc++.h>
using namespace std;

int main()
{
    int x;
    int result = 0;
    cout<<"Enter size of array: ";
    int size;
    cin>>size;
    vector<int> nums;
    cout<<"Taking input from user"<<endl;
    for (int i = 0; i < size; i++)
    {
        cin >> x;
        nums.push_back(x);
    }
    cout<<"Printing the vector"<<endl;
    sort(nums.begin(), nums.end());
    for (int i = 0; i < size; i++)
    {
        cout << nums[i] << endl;
    }
    for(int i=0;i<size;i++){
        if(nums[i]==nums[i+1]){
            result = 0;
            break;
        }
        else{
            result = 1;
        }
    }
    if(result == 0){
        cout<<"True"<<endl;
    }
    if(result == 1){
        cout<<"False"<<endl;
    }

    return 0;
}