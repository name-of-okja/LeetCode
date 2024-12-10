class Solution
{
public:
    int countBinarySubstrings(string s)
    {
        vector<int> board;
        int count = 1, l = s.size();
        for (int i = 1; i < l; ++i)
        {
            if (s[i] != s[i - 1])
            {
                board.push_back(count);
                count = 1;
            }
            else
            {
                ++count;
            }
        }
        board.push_back(count);

        int result = 0;
        l = board.size();
        for (int i = 1; i < l; ++i)
        {
            result += min(board[i], board[i - 1]);
        }

        return result;
    }
};