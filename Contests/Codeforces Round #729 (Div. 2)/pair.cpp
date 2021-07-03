#include <bits/stdc++.h>
using namespace std;
 
// Function to check if we can split
// array into pairs of even sum or not
bool canPairs(int arr[], int n)
{
    // If the length is odd then it
    // is not possible to make pairs
    if (n % 2 == 1)
        return false;
 
    // Initialize count of odd & even
    int odd_count = 0, even_count = 0;
 
    // Iterate through the array
    for (int i = 0; i < n; i++)
    {
        // Count even element
        if (arr[i] % 2 == 0)
            even_count++;
        else
            odd_count++;
    }
 
    // If count of even elements
    // and odd elements are even
    if (even_count % 2 == 0 && odd_count % 2 == 0)
    {
        return true;
    }
 
    return false;
}
 
// Driver Code
int main()
{
    int arr[] = { 2, 3, 4, 5 };
 
    int N = sizeof(arr) / sizeof(arr[0]);
 
    // Function Call
    if (canPairs(arr, N)) {
        cout << "Yes";
    }
    else {
        cout << "No";
    }
 
    return 0;
}
