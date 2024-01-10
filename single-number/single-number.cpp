class Solution {
public:
    int continueIndex(vector<int> &nums, int pos)
    {
        for (int i = pos + 1; i < nums.size(); ++i)
        {
            if (nums[pos] != nums[i])
            {
                return i;
            }
        }

        return pos + 1;
    }

    int singleNumber(vector<int> &nums)
    {
        sort(nums.begin(), nums.end());

        int pos = 0;
        while (true)
        {
            int nextIndex = continueIndex(nums, pos);

            if (pos + 1 == nextIndex)
            {
                return nums[pos];
            }

            pos = nextIndex;
        }
    }
};