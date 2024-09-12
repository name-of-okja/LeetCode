class Solution
{
public:
    vector<int> findDisappearedNumbers(vector<int> &nums)
    {
        vector<int> result;
        set<int> s(nums.begin(), nums.end());
        for (int i = 1; i <= nums.size(); ++i)
        {
            auto a = s.find(i);

            if (s.find(i) == s.end())
            {
                result.push_back(i);
            }
        }

        return result;
    }
};