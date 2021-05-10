#include <bits/stdc++.h>
using namespace std;

int findRepeatFirstN2(char* s)
{
    // this is O(N^2) method
    int p = -1, i, j;
    for (i = 0; i < strlen(s); i++)
    {
        for (j = i + 1; j < strlen(s); j++)
        {
            if (s[i] == s[j])
            {
                p = i;
                break;
            }
        }
        if (p != -1)
            break;
    }
 
    return p;
}

void run_case(){
    int n;
    cin>>n;
    char str[n];
    for(int i=0;i<n;i++){
        cin>>str[i];
    }
    int pos = findRepeatFirstN2(str);
    if (pos == -1)
        cout << "NO\n";
    else
        cout << "YES\n";
}
int main()
{
  ios_base::sync_with_stdio(0);cin.tie(0);
  int tests; 
  cin>>tests;
  while (tests--)
    run_case();
  return 0;
}