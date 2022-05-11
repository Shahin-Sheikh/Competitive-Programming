// Input
// 2
// 3 3
// Output
// 2
// Input
// 3
// 2 1 2
// Output
// 2

#include <iostream>
#include <vector>

using namespace std;

int main()
{
    int n, m;
    cin >> n >> m;
    vector<int> v(m);
    for (int i = 0; i < m; i++)
    {
        cin >> v[i];
    }
    int max = v[0];
    for (int i = 1; i < m; i++)
    {
        if (v[i] > max)
        {
            max = v[i];
        }
    }
    int min = v[0];
    for (int i = 1; i < m; i++)
    {
        if (v[i] < min)
        {
            min = v[i];
        }
    }
    int count = 0;
    for (int i = 0; i < m; i++)
    {
        if (v[i] == max)
        {
            count++;
        }
    }
    if (count > 1)
    {
        cout << max;
    }
    else
    {
        cout << min;
    }
    return 0;
}