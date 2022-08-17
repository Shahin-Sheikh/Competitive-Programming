#include <bits/stdc++.h>
using namespace std;

void tr()
{
    int p,y,r1,r2;
    cin >> p >> y >> r1 >> r2;
    double SI1 = 0;
    double SI2 = 0;
    //double ci = 0;

    SI1 = (p * y * r1) / 100;
    SI2 = (y * y * r2) / 100;
    //ci = p * pow((1 + r2 / 100), y);
    if (SI1 < SI2)
    {
        cout << "Bank 1\n";
    }
    else if (SI1 > SI2)
    {
        cout << "Bank 2\n";
    }
    else if (SI1 == SI2)
    {
        cout << "Confused huh!\n";
    }
}

int main()
{
    int tests;
    cin >> tests;
    while (tests--)
    {
        tr();
    }
    return 0;
}