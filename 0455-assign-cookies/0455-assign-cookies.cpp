class Solution
{
public:
    int findContentChildren(vector<int> &g, vector<int> &s)
    {
        sort(g.begin(), g.end());
        sort(s.begin(), s.end());

        int result = 0;
        int i = 0;
        for (int a : g)
        {
            while (i < s.size())
            {
                if (a <= s[i])
                {
                    ++result;
                    ++i;
                    break;
                }
                ++i;
            }
        }

        return result;
    }
};