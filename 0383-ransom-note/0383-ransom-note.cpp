class Solution
{
public:
    bool canConstruct(string ransomNote, string magazine)
    {
        int arr[26] = {
            0,
        };

        for (int c : magazine)
        {
            arr[c - 97]++;
        }

        for (int c : ransomNote)
        {
            int v = --arr[c - 97];

            if (v < 0)
            {
                return false;
            }
        }

        return true;
    }
};