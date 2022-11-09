#include <bits/stdc++.h>
using namespace std;
void tr()
{
    int count = 0;
    char str1[2];
    char str2[2];
    char tempstr[2];
    scanf("%s %s", str1, str2);
    if (str1 != str2)
    {
        for (int i = 0; i <2 ; i++)
        {
            if (str2[0] != str2[1])
            {
                tempstr[0] = str2[1];
                tempstr[1] = str2[0];
                
                break;
            }
        }
    }
    for(int i = 0; i < 2; i++)
    {
        cout<<tempstr[i];
    }
    //cout << tempstr[0] << tempstr[1];
    cout << count << endl;
}
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int tests;
    cin >> tests;
    for (int i = 0; i < tests; i++)
    {
        tr();
    }
    return 0;
}