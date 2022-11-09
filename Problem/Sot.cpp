#include <iostream>
#include <string.h>
using namespace std;

int main()
{
    int size, i, j;
    int temp;
    cin >> size;
    int arr[size];
    for (i = 0; i < size; i++)
    {
        cin >> arr[i];
    }
    for (i = 0; i < size; i++)
    {
        for (j = i+1; j < size; j++)
        {
            temp = arr[i];
            arr[i] = arr[j];
            arr[j] = temp;
        }
    }
    for (i = 0; i < size; i++)
    {
        cout << arr[i] << " ";
    }
    return 0;
}