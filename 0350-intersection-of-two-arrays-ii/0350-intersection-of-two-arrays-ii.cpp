class Solution
{
public:
    vector<int> intersect(vector<int> &nums1, vector<int> &nums2)
    {
        vector<int> result;
        int arr[1001] = {
            0,
        };

        for (int v : nums2)
        {
            arr[v]++;
        }

        for (int v : nums1)
        {
            if (arr[v] > 0)
            {
                result.push_back(v);
                arr[v]--;
            }
        }

        return result;
    }
};