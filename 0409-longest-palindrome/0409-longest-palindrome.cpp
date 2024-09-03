class Solution
{
public:
    int longestPalindrome(string s)
    {
        if (s.length() == 1)
        {
            return 1;
        }

        unordered_map<char, int> m;
        for (char c : s)
        {
            m[c]++;
        }
        bool center = true;
        int result = 0;
        for (auto i : m)
        {
            if (center && i.second % 2 == 1)
            {
                result += 1;
                center = false;
            }
            result += (i.second / 2) * 2;
        }

        return result;
    }
};