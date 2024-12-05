class Solution
{
public:
    int findLengthOfLCIS(vector<int> &nums)
    {
        int maxLen = 0;
        int curLen = 0;
        int prev = INT32_MIN;

        int l = nums.size();
        for (int i = 0; i < l; ++i)
        {
            if (nums[i] <= prev)
            {
                maxLen = max(maxLen, curLen);
                curLen = 0;
            }
            
            prev = nums[i];
            ++curLen;
        }
        return max(maxLen, curLen);
    }
};