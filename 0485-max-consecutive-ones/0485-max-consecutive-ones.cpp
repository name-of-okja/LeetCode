class Solution
{
public:
    int findMaxConsecutiveOnes(vector<int> &nums)
    {
        int result = 0;
        int maxLen = 0;

        for (int v : nums)
        {
            if (v == 0)
            {
                result = max(result, maxLen);
                maxLen = 0;
            }
            else 
            {
                ++maxLen;
            }
        }
        return max(result, maxLen);
    }
};