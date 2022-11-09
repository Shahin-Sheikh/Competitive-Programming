#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    string s;
    for (int i = 0; i < n; i++)
    {
        cin >> s;
        if (s.length() > 3)
        {
            cout << "3" << endl;
        }
        else
        {
            int c = 0;
            int d = 0;
            if (s[0] == 'o')
            {
                c++;
            }
            if (s[1] == 'n')
            {
                c++;
            }
            if (s[2] == 'e')
            {
                c++;
            }
            if (c >= 2)
            {
                cout << "1" << endl;
            }
            if (s[0] == 't')
            {
                d++;
            }
            if (s[1] == 'w')
            {
                d++;
            }
            if (s[2] == 'o')
            {
                d++;
            }
            if (d >= 2)
            {
                cout << "2" << endl;
            }
        }
    }
    return 0;
}