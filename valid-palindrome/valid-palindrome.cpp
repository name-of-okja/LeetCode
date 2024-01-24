class Solution {
public:
    bool isPalindrome(string s)
    {
        int l = 0, r = s.size();

        while (l < r)
        {
            if (!isalnum(s[l]))
            {
                l++;
                continue;
            }
            if (!isalnum(s[r]))
            {
                r--;
                continue;
            }

            if (toupper(s[l]) != toupper(s[r]))
            {
                return false;
            }
            
            l++, r--;
        }

        return true;
    }
};