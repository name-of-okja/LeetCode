class Solution
{
public:
    int calPoints(vector<string> &operations)
    {
        vector<int> board;
        for (auto &s : operations)
        {
            if (s == "C")
            {
                // 마지막 점수를 취소
                board.pop_back();
            }
            else if (s == "D")
            {
                // 마지막 점수의 두 배를 추가
                int lastV = board.back();
                board.push_back(lastV * 2);
            }
            else if (s == "+")
            {
                // 마지막 두 점수의 합을 추가
                int lastI = board.size() - 1;
                int a = board[lastI];
                int b = board[lastI - 1];
                board.push_back(a + b);
            }
            else
            {
                // 새로운 점수를 추가
                board.push_back(stoi(s));
            }
        }

        return accumulate(board.begin(), board.end(), 0);
    }
};