class Solution
{
public:
    vector<int> findErrorNums(vector<int> &nums)
    {
        vector<int> result;
        sort(nums.begin(), nums.end());
        int l = nums.size();
        int p = 0;
        for (int i = 0; i < l; ++i)
        {
            if (nums[i] == p)
            {
                result.push_back(p);
            }
            if (nums[i] != i + 1)
            {
                result.push_back(i + 1);
            }
            if (result.size() == 2)
            {
                break;
            }

            p = nums[i];
        }
        sort(result.begin(), result.end());
        return result;
    }
};