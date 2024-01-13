class Solution {
public:
    vector<int> intersect(vector<int> &nums1, vector<int> &nums2)
    {
        unordered_multiset<int> u;
        vector<int> result;
        for (auto value : nums2)
        {
            u.insert(value);
        }

        for (auto value : nums1)
        {
            auto f = u.find(value);

            if (f != u.end())
            {
                result.push_back(value);
                u.erase(f);
            }
        }

        return result;
    }
};