// C++ implementation to find the
// minimum number of operations to
// make two strings equal
 
#include <bits/stdc++.h>
 
#define MAX 500001
using namespace std;
 
int parent[MAX];
int Rank[MAX];
 
// Function to find out
// parent of an alphabet
int find(int x)
{
    return parent[x] =
       parent[x] == x ? x :
            find(parent[x]);
}
 
// Function to merge two
// different alphabets
void merge(int r1, int r2)
{
    // Merge a and b using
    // rank compression
    if (r1 != r2) {
        if (Rank[r1] > Rank[r2]) {
            parent[r2] = r1;
            Rank[r1] += Rank[r2];
        }
        else {
            parent[r1] = r2;
            Rank[r2] += Rank[r1];
        }
    }
}
 
// Function to find the minimum
// number of operations required
void minimumOperations(string s1,
                       string s2){
     
    // Initializing parent to i
    // and rank(size) to 1
    for (int i = 1; i <= 26; i++) {
        parent[i] = i;
        Rank[i] = 1;
    }
     
    // We will store our
    // answerin this vector
    vector<pair<char, char> > ans;
 
    // Traversing strings
    for (int i = 0; i < s1.length(); i++) {
        if (s1[i] != s2[i]) {
 
            // If they have differnt parents
            if (find(s1[i] - 96) !=
                find(s2[i] - 96)) {
                 
                // Find their respective
                // parents and merge them
                int x = find(s1[i] - 96);
                int y = find(s2[i] - 96);
                merge(x, y);
 
                // Store this in
                // our Answer vector
                ans.push_back({ s1[i], s2[i] });
            }
        }
    }
 
    // Number of operations
    cout << ans.size() << endl;
   
         
}

int result(){
        // Two strings
    // S1 and S2
    string s1, s2;
    cin>> s1 >> s2;
     
    // Function Call
    minimumOperations(s1, s2);
    return 0;
}
 
// Driver Code
int main()
{
    // Two strings
    // S1 and S2
    int t;
     //string s1, s2;
    for(int z=0;z<t;z++){
        result();
    }
    // Function Call
    return 0;
}