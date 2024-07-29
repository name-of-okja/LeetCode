class Solution
{
public:
    int missingNumber(vector<int> &nums)
    {
        sort(nums.begin(), nums.end());
        int max = nums.size();
        for (int i = 0; i < max; i++)
        {
            if (nums[i] != i)
            {
                return i;
            }
        }

        return max;
    }
};