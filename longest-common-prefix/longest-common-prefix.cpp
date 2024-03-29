class Solution {
public:
    string longestCommonPrefix(vector<string> &strs)
    {
        string result = "";

        sort(strs.begin(), strs.end());

        string first = strs[0], last = strs[strs.size() - 1];

        for (int i = 0; i < first.size(); i++)
        {
            if (first[i] == last[i])
            {
                result += first[i];
            }
            else
            {
                break;
            }
        }

        return result;
    }
};