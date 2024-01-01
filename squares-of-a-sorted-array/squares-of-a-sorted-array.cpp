class Solution {
public:
    vector<int> sortedSquares(vector<int> &nums)
    {
        vector<int> result(nums.size());
        int l = 0, r = nums.size() - 1, ptr = nums.size() - 1;

        while (ptr >= 0)
        {
            result[ptr--] = abs(nums[l]) > abs(nums[r]) ? nums[l] * nums[l++] : nums[r] * nums[r--];
        }

        return result;
    }
};