class Solution {
public:
    int lengthOfLongestSubstring(string s)
    {
        unordered_set<int> us;
        int maxLen = 0;
        for (int left = 0, right = 0; right < s.length(); right++)
        {
            if (us.find(s[right]) == us.end())
            {
                us.insert(s[right]);
                maxLen = max(right - left + 1, maxLen);
            }
            else
            {
                while (us.count(s[right]))
                {
                    us.erase(s[left++]);
                }

                us.insert(s[right]);
            }
        }

        return maxLen;
    }
};