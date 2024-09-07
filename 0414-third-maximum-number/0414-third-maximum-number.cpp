class Solution
{
public:
    int thirdMax(vector<int> &nums)
    {
        sort(nums.begin(), nums.end());
        int c = 0;
        int v = INT_MIN;

        for (int i = nums.size() - 1; i >= 0; --i)
        {
            if (nums[i] != v)
            {
                ++c;
                v = nums[i];
            }

            if (c == 3)
            {
                return v;
            }
        }

        return nums[nums.size() - 1];
    }
};