class Solution {
public:
    bool isValidSudoku(vector<vector<char>>& board) {
        // used1 : check row , used2 : check col , used3 : check sub-box
        bool used1[9][9] = {false}, used2[9][9] = {false}, used3[9][9] = {false};

        for (int i = 0; i < board.size(); ++i)
            for (int j = 0; j < board[i].size(); ++j)
                if (board[i][j] != '.')
                {
                    int num = board[i][j] - '0' - 1;
                    int k = i / 3 * 3 + j / 3;

                    if (used1[i][num] || used2[j][num] || used3[k][num])
                        return false;
                    used1[i][num] = used2[j][num] = used3[k][num] = true;
                }
        return true;
    }
};