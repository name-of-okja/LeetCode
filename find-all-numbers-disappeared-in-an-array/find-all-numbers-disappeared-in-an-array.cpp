class Solution {
public:
    vector<int> findDisappearedNumbers(vector<int> &nums)
    {
        vector<int> result;
        vector<bool> flag(nums.size() + 1);
        for (auto num : nums)
        {
            flag[num] = true;
        }
        for (int i = 1; i <= nums.size(); i++)
        {
            if (flag[i] == false)
            {
                result.push_back(i);
            }
        }
        return result;
    }
};