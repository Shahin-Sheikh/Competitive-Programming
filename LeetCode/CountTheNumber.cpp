class Solution
{
public:
    int countConsistentStrings(string allowed, vector<string> &words)
    {
        int ans = 0;
        unordered_map<char, int> mymap;
        for (int i = 0; i < allowed.size(); i++)
        {
            mymap[allowed[i]]++;
        }
        for (int i = 0; i < words.size(); i++)
        {
            string a = words[i];
            int x = 0;
            for (int j = 0; j < a.size(); j++)
            {
                if (mymap[a[j]] != 1)
                {
                    continue;
                }
                else
                {
                    x++;
                }
            }
            if (x == words[i].size())
            {
                ans++;
            }
        }
        return ans;
    }
};