class Solution {
public:
    int lengthOfLongestSubstring(string s)
    {
        unordered_map<char, int> m;
        int maxLen = 0;

        for (int left = 0, right = 0; right < s.length(); right++)
        {
            if (m.find(s[right]) == m.end() || m[s[right]] < left)
            {
                maxLen = max(right - left + 1, maxLen);
            }
            else
            {
                left = m[s[right]] + 1;
            }

            m[s[right]] = right;
        }

        return maxLen;
    }
};