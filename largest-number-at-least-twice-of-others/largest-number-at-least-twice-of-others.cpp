class Solution {
public:
    int dominantIndex(vector<int> &nums)
    {
        int m = -1, maxIndex;
        for (int i = 0; i < nums.size(); ++i)
        {
            if (nums[i] > m)
            {
                m = nums[i];
                maxIndex = i;
            }
        }

        for (int i = 0; i < nums.size(); ++i)
        {
            if (nums[i] * 2 > m && i != maxIndex)
            {
                return -1;
            }
        }

        return maxIndex;
    }
};