class Solution
{
public:
    vector<int> nextGreaterElement(vector<int> &nums1, vector<int> &nums2)
    {
        vector<int> result;
        unordered_map<int, int> m;

        for (int i = 0; i < nums2.size(); ++i)
        {
            int v = -1;
            if (i + 1 < nums2.size() && nums2[i] < nums2[i + 1])
            {
                v = nums2[i + 1];
            }

            m[nums2[i]] = v;
        }

        for (int n : nums1)
        {
            result.push_back(m.find(n)->second);
        }

        return result;
    }
};