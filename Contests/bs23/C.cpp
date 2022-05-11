// Input
// In the first line, number of test cases.
// For each test case, the first line contains N, XX (1 \le N \le 10^51≤N≤105,1 \le X \le 10^91≤X≤10 9) the number of Employees and the number given in the problem statement.
// the second line contains NN separated integers Weight (W_iWi) of employee having ID - i (1 \le W_i \le 10^91≤W i≤10 9).

// Output
// For each test case output the number of ways a team can be formed under this condition.

// Sample Input
// 2
// 1 4
// 3
// 2 4
// 1 5

// Sample Output
// 1
// 1

#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, m;
        cin >> n >> m;
        vector<int> a(n);
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
        }
        vector<int> b(m);
        for (int i = 0; i < m; i++)
        {
            cin >> b[i];
        }
        int ans = 0;
        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < m; j++)
            {
                if (a[i] == b[j])
                {
                    ans++;
                }
            }
        }
        cout << ans << endl;
    }
    return 0;
}