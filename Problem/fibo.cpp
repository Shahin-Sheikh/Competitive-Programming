#include <iostream>
using namespace std;

int main()
{
    int n, t1 = 0, t2 = 1, nextTerm;
    cin >> n;
    nextTerm = t1 + t2;
    for (int i = 3; i < n; i++)
    {
        t1 = t2;
        t2 = nextTerm;
        nextTerm = t1 + t2;
    }
    cout << nextTerm;
    return 0;
}