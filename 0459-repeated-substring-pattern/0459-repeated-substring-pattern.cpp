class Solution
{
public:
    bool repeatedSubstringPattern(string s)
    {
        if (s.size() == 1)
        {
            return false;
        }

        string reapet;
        reapet.push_back(s[0]);
        int n = s.size() / 2;
        for (int i = 1; i < n; ++i)
        {
            if (s[i] != s[0])
            {
                reapet.push_back(s[i]);
            }
            else
            {
                break;
            }
        }

        if (s.size() % reapet.size() != 0)
        {
            return false;
        }

        int repeatedCount = s.size() / reapet.size();
        string result;
        for (int i = 0; i < repeatedCount; ++i)
        {
            result += reapet;
        }

        return result == s;
    }
};