#include <bits/stdc++.h>
using namespace std;

int main()
{
    int sum = 0, i, j;
    for (i = 0, j = 2; i + j < 20; i++, j = j + 3)
    {
        sum += i + j;
        cout << i<<" "<< j <<" " <<sum<< endl;
        //cout << sum ;
    }
    cout << i<<" "<< j <<" "<< sum << endl;
    return 0;
}