#include <bits/stdc++.h>
using namespace std;

// Hash table to implement 905, shahin

class HashTable
{
private:
    static const int hash_groups = 10;
    list<pair<int, string>> tbale[hash_groups];

public:
    bool isEmpty() const;
    int hashFunction(int key);
    void insertItem(int key, string value);
}