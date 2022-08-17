// Input:
// The first line contains an integer T (1 <= T <= 10) denoting number of test cases and then T set of input follows of which. the first line contains values of p, q, z (1 <= p, q, z <= 10^6) of the equation x^2 + y^2 - px - qy + z = 0 and the next line contains an integer N (1 <= N <= 10^6) denoting the number of marbles Adrita has and then another N lines follows containing x, y ( -10^5 <= x, y <= 10^5) denoting the coordinates of the marbles.
// Output:
// For each test case output the name of the bank which has the highest interest rate. If both the banks have the same interest rate then output "Confused huh!".


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