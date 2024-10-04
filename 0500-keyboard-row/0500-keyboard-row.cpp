class Solution
{
public:
    vector<string> findWords(vector<string> &words)
    {
        unordered_map<char, int> m;
        vector<string> result;

        string s = "qwertyuiop";
        for (int i = 0; i < s.length(); i++)
            m[s[i]] = 1;

        s = "asdfghjkl";
        for (int i = 0; i < s.length(); i++)
            m[s[i]] = 2;

        s = "zxcvbnm";
        for (int i = 0; i < s.length(); i++)
            m[s[i]] = 3;

        for (int i = 0; i < words.size(); ++i)
        {
            string s = words[i];
            transform(s.begin(), s.end(), s.begin(), ::tolower);

            bool isPush = true;
            for (int j = 0; j < s.size() - 1; ++j)
            {
                if (m[s[j]] != m[s[j + 1]])
                {
                    isPush = false;
                    break;
                }
            }

            if (isPush)
            {
                result.push_back(words[i]);
            }
        }

        return result;
    }
};