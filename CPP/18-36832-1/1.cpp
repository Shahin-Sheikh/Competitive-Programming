#include<bits/stdc++.h>

using namespace std;

int main(){
    int n;
    cout<<"Enter the size of array: \n";
    cin>>n;
    int ara[n],sum=0;
    cout<<"Enter the elements of the array: \n";
    for(int i=0;i<n;i++){
        cin>>ara[i];
        sum += ara[i];
    }
    cout<<sum<<"\n";
    return 0;
}