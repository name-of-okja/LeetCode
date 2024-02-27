class Solution {
public:
    int climbStairs(int n)
    {
        int result = 1, prev = 1;
        for (int i = 2; i <= n; i++)
        {
            int temp = result;
            result += prev;
            prev = temp;
        }

        return result;
    }
};