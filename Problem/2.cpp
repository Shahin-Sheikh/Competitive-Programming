
#include <iostream>

using namespace std;

int main()
{
    int a = 10, b = 25;
    int c = a + 1;
    a++ 
    a=a+1;
    int d = b + 1;
    a = c + d;
    // b = ++b + ++a;
    cout << a << " " << b << endl;
    return 0;
}