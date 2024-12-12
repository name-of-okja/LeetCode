class Solution
{
public:
    int findShortestSubArray(vector<int> &nums)
    {
        struct Data
        {
            int count = 0;
            int firstIdx = -1;
            int lastIdx = -1;
        };

        unordered_map<int, Data> um;

        int s = nums.size();
        int m = 0;
        for (int i = 0; i < s; ++i)
        {
            if (um.find(nums[i]) == um.end())
            {
                um[nums[i]].firstIdx = i;
            }

            um[nums[i]].lastIdx = i;
            ++um[nums[i]].count;

            m = max(m, um[nums[i]].count);
        }

        int result = s;
        for (const auto &[k, v] : um)
        {
            if (m == v.count)
            {
                result = min(result, v.lastIdx - v.firstIdx + 1);
            }
        }

        return result;
    }
};