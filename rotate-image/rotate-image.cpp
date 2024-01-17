class Solution {
public:
    void rotate(vector<vector<int>> &nums)
    {
        reverse(nums.begin(), nums.end());

        for (int i = 0; i < nums.size(); i++)
        {
            for (int j = i + 1; j < nums[i].size(); j++)
            {
                swap(nums[i][j], nums[j][i]);
            }
        }
    }
};