#include <bits/stdc++.h>
using namespace std;
bool isprime(int Number)
{
    if (Number % 2 == 0)
        return false;
    else
    {
        for (int i = 3; i <= sqrt(Number); i + 2)
        {
            if (Number % i == 0)
                return false;
        }
        return true;
    }
}
int main()
{
    isprime(100);
}