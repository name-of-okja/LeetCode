class Solution
{
public:
    char findTheDifference(string s, string t)
    {
        int arr[26] = {
            0,
        };

        for (int c : s)
        {
            arr[c - 97]++;
        }

        for (int c : t)
        {
            int v = --arr[c - 97];

            if (v < 0)
            {
                return static_cast<char>(c);
            }
        }

        return '\0';
    }
};