class Solution {
public:
    int strStr(string haystack, string needle)
    {
        int i = 0, len = haystack.size() - needle.size() + 1;

        while (i < len)
        {
            if (haystack[i] == needle[0])
            {
                int j = 1;

                while (j < needle.size())
                {
                    if (haystack[i + j] != needle[j])
                    {
                        break;
                    }
                    j++;
                }

                if (j == needle.size())
                {
                    return i;
                }
            }
            i++;
        }

        return -1;
    }
};

