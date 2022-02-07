/* #include <bits/stdc++.h>
using namespace std;

int main()
{
    vector<int> vec1;
    vector<int> vec2;
    int element;
    int size;
    cin >> size;
    for (int i = 0; i < size; i++)
    {
        cout << "Enter the element: ";
        cin >> element;
        vec1.push_back(element);
    }
    for (int i = 0; i < size; i++)
    {
        for (int j = 0; j < size; j++)
        {
            if (vec1[i] > vec1[j])
            {
                vec1.push_back(swap(i, j))
            }
        }
    }
    return 0;
} */

// C++ program for implementation of Bubble sort
#include <bits/stdc++.h>
using namespace std;

void swap(int *xp, int *yp)
{
    int temp = *xp;
    *xp = *yp;
    *yp = temp;
}

// A function to implement bubble sort
void bubbleSort(int arr[], int n)
{
    int i, j;
    for (i = 0; i < n - 1; i++)

        // Last i elements are already in place
        for (j = 0; j < n - i - 1; j++)
            if (arr[j] > arr[j + 1])
                swap(&arr[j], &arr[j + 1]);
}

/* Function to print an array */
void printArray(int arr[], int size)
{
    int i;
    for (i = 0; i < size; i++)
        cout << arr[i] << " ";
    cout << endl;
}

// Driver code
int main()
{
    int arr[] = {64, 34, 25, 12, 22, 11, 90};
    int n = sizeof(arr) / sizeof(arr[0]);
    bubbleSort(arr, n);
    cout << "Sorted array: \n";
    printArray(arr, n);
    cout << n << endl;
    return 0;
}

// This code is contributed by rathbhupendra
