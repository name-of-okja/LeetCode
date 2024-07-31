class Solution
{
public:
    int firstBadVersion(int n)
    {
        int l = 0, r = n, m, ans;

        while (l <= r)
        {
            m = l + ((r - l) / 2);
            if (isBadVersion(m))
            {
                ans = m;
                r = m - 1;
            }
            else
            {
                l = m + 1;
            }
        }

        return ans;
    }
};