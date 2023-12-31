class Solution {
public:
    vector<int> findDisappearedNumbers(vector<int> &nums)
    {
        unordered_set<int> s(nums.begin(), nums.end());
        vector<int> result(nums.size() - s.size());

        for (int i = 1, j = 0; i <= nums.size(); i++)
        {
            if (!s.count(i))
            {
                result[j++] = i;
            }
        }

        return result;
    }
};