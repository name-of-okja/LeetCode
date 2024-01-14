class Solution {
public:
    vector<int> twoSum(vector<int> &nums, int target)
    {
        unordered_map<int, int> m;

        for (int i = 0; i < nums.size(); i++)
        {
            int g = target - nums[i];
            if (m.count(g))
            {
                return {m[g], i};
            }
            m[nums[i]] = i;
        }

        return {};
    }
};