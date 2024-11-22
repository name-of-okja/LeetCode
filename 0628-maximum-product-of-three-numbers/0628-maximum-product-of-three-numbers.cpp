class Solution
{
public:
    int maximumProduct(vector<int> &nums)
    {
        if (nums.size() == 3)
        {
            return nums[0] * nums[1] * nums[2];
        }

        sort(nums.begin(), nums.end());
        int lastIdx = nums.size() - 1;
        int maxValue = nums[lastIdx] * nums[lastIdx - 1] * nums[lastIdx - 2];

        if (nums[1] < 0)
        {
            maxValue = max(maxValue, nums[lastIdx] * nums[1] * nums[0]);
        }
        return maxValue;
    }
};