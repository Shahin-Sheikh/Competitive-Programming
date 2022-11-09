#include <iostream>
using namespace std;

int main()
{
    int n;
    cin >> n;
    int fact = 1;
    for (int i = 0; i < n; i++)
    {
        fact = fact * (i + 1);
    }
    cout << fact;
    return 0;
}