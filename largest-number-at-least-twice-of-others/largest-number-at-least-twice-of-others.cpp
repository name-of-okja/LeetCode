class Solution {
public:
    int dominantIndex(vector<int> &nums)
    {
        int a = 0, b = 0, maxIdx = 0;
        for (int i = 0; i < nums.size(); ++i)
        {
            if (nums[i] < b)
                continue;

            b = nums[i];

            if (b > a)
            {
                swap(a, b);
                maxIdx = i;
            }
        }

        return a >= b * 2 ? maxIdx : -1;
    }
};