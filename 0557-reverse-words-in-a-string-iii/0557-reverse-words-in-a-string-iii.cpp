class Solution
{
public:
    string reverseWords(string s)
    {
        stringstream ss(s);
        string t, result;

        while (ss >> t)
        {
            reverse(t.begin(), t.end());
            result += t;
            result += ' ';
        }

        return result.substr(0, result.size() - 1);
    }
};