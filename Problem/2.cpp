#include <bits/stdc++.h>
using namespace std;

int main()
{
    int ara[10] = {0,1,2,3,4,5,6,7,8,9};
    for(int i=0;i<10;i++){
        ara[i] = ara[i] + 10;
    }
    for(int i=0;i<10;i++){
        cout<<ara[i]<<"\n";
    }
    return 0;
}