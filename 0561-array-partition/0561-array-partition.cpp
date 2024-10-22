class Solution
{
public:
    int arrayPairSum(vector<int> &nums)
    {
        sort(nums.begin(), nums.end());

        int i = 0;
        int result = 0;
        int l = nums.size();
        while (i < l)
        {
            result += nums[i];
            i += 2;
        }

        return result;
    }
};