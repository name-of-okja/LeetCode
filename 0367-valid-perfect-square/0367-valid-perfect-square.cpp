class Solution
{
public:
    bool isPerfectSquare(int num)
    {
        int l = 1, r = num;
        while (l <= r)
        {
            // 9 3*3 4
            int m = l + ((r - l) / 2);
            unsigned long long d = static_cast<unsigned long long>(m) * m;
            if (d > num)
            {
                r = m - 1;
            }
            else if (d < num)
            {
                l = m + 1;
            }
            else
            {
                return true;
            }
        }

        return false;
    }
};