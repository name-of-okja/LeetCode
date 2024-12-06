class Solution
{
public:
    bool validPalindrome(string s)
    {
        int l = 0, r = s.length() - 1;
        while (l < r)
        {
            if (s[l] != s[r])
            {
                return _validPalindrome(s, l + 1, r) || _validPalindrome(s, l, r - 1);
            }
            ++l;
            --r;
        }

        return true;
    }

private:
    bool _validPalindrome(string s, int l, int r)
    {
        while (l < r)
        {
            if (s[l] != s[r])
            {
                return false;
            }

            ++l;
            --r;
        }
        return true;
    }
};