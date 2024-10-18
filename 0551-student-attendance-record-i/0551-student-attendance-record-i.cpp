class Solution
{
public:
    bool checkRecord(string s)
    {
        int a = 0;
        int l = 0;

        for (char &c : s)
        {
            if (c == 'A')
            {
                ++a;
                l = 0;
            }
            if (c == 'L')
            {
                ++l;
            }
            if (c == 'P')
            {
                l = 0;
            }
            if (a == 2)
            {
                return false;
            }

            if (l == 3)
            {
                return false;
            }
        }
        return true;
    }
};