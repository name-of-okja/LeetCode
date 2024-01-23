class Solution {
public:
    bool isAnagram(string s, string t)
    {
        unordered_map<char, int> map;

        for (auto c : s)
        {
            map[c]++;
        }

        for (auto c : t)
        {
            map[c]--;
        }

        for (auto m : map)
        {
            if (m.second != 0)
            {
                return false;
            }
        }

        return true;
    }
};