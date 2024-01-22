class Solution {
public:
    int firstUniqChar(string s)
    {
        unordered_map<char, int> map;

        for (char& key : s) 
        {
            map[key]++;
        }

        for (int i = 0; i < s.size(); i++)
        {
            if (map[s[i]] == 1) 
            {
                return i;
            }
        }

        return -1;
    }
};