#include <bits/stdc++.h>
using namespace std;
void permute(string a, int l, int r)
{
    // Base case
    if (l == r)
        cout << a << endl;
    else
    {
        // Permutations made
        for (int i = l; i <= r; i++)
        {

            // Swapping done
            swap(a[l], a[i]);

            // Recursion called
            permute(a, l + 1, r);

            // backtrack
            swap(a[l], a[i]);
        }
    }
}

// Driver Code
int check()
{
    int n;
    cin>>n;
    string str;
    cin>>str;
    permute(str, 0, n - 1);
    if (permute(str, 0, n - 1) == str || str[])
        return 0;
}

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int tests;
    cin >> tests;
    for(int i = 0; i < tests; i++)
    {
        check();
    }
    return 0;
}