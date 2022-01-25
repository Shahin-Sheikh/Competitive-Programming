#include <bits/stdc++.h>
using namespace std;

void display(vector<int> &v)
{
    for (int i = 0; i < v.size(); i++)
    {
        cout << v[i] << " ";
    }
    cout << "\n";
}
int main()
{
    vector<int> vec1;
    int element;
    int size;
    cin >> size;
    for (int i = 0; i < size; i++)
    {
        cout << "Enter the element: ";
        cin >> element;
        vec1.push_back(element);
    }
    // vec1.pop_back();
    display(vec1);
    vector<int>::iterator iter = vec1.end();
    vec1.insert(iter, 566);
    display(vec1);
    return 0;
}