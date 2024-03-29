#include <bits/stdc++.h>
#include <math.h>
using namespace std;
double AttackerSuccessProbability(double q, int z)
{
    double p = 1.0 - q;
    double lambda = z * (q / p);
    double sum = 1.0;
    int i, k;
    for (k = 0; k <= z; k++)
    {
        double poisson = exp(-lambda);
        for (i = 1; i <= k; i++)
            poisson *= lambda / i;
        sum -= poisson * (1 - pow(q / p, z - k));
    }
    cout << sum << endl;
    //return sum;
}
int main()
{
    AttackerSuccessProbability(0.5, 3);
    //cout << sum << endl;
    return 0;
}