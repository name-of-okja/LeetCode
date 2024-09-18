class Solution
{
public:
    int hammingDistance(int x, int y)
    {
        int v = x ^ y;

        int result = 0;
        for (int i = 0; i < 32; ++i)
        {
            result += (v >> i) & 1;
        }

        return result;
    }
};