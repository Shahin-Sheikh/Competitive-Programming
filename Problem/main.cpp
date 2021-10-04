//What is the output when the following code fragment is executed?
#include <iostream>

using namespace std;

int main()
{
	int n, k = 8;
	n = (100 % k ? k + 1 : k - 1);
	cout << "n = " << n << "   k = " << k << endl;
	return 0;
}