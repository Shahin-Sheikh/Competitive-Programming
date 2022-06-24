#include <bits/stdc++.h>
using namespace std;

int main()
{
    srand(time(0));
    string pass;

    string data = "abcdefghijklmnopqrstuvwxyz"
                  "ABCDEFGHIJKLMNOPQRSTUVWXYZ"
                  "0123456789"
                  "!@#$%^&*()_+-=[]{}|;':,./<>?";
    for (int i = 0; i < 10; i++)
    {
        int index = rand() % data.length();
        pass += data[index];
    }
    cout << pass << endl;
}