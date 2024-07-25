class Solution
{
public:
    bool isAnagram(string s, string t)
    {
        int arr[26] = {
            0,
        };

        for (auto c : s)
        {
            arr[static_cast<int>(c) - 97]++;
        }

        for (auto c : t)
        {
            arr[static_cast<int>(c) - 97]--;
        }

        for (auto i : arr)
        {
            if (i != 0)
            {
                return false;
            }
        }
        return true;
    }
};