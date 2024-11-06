class Solution
{
public:
    int findLHS(vector<int> &nums)
    {
        unordered_map<int, int> m;
        for (int n : nums)
        {
            ++m[n];
        }

        int result = 0;
        for (auto [n, v] : m)
        {
            if (m.find(n - 1) != m.end())
            {
                result = max(result, m[n - 1] + v);
            }
        }

        return result;
    }
};