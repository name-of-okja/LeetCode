class Solution
{
public:
    int countSegments(string s)
    {
        int result = 0;
        bool flag = false;

        for (auto c : s)
        {
            if (c != ' ')
            {
                if (!flag)
                {
                    flag = true;
                    result++;
                }
            }
            else
            {
                flag = false;
            }
        }

        return result;
    }
};