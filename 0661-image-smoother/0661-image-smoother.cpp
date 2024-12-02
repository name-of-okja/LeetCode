class Solution
{
public:
    vector<vector<int>> imageSmoother(vector<vector<int>> &img)
    {
        int y = img.size();       // 행의 개수
        int x = img[0].size();    // 열의 개수
        vector<vector<int>> result(y, vector<int>(x, 0));

        // 방향 벡터: 상하좌우 및 대각선
        vector<int> directions = {-1, 0, 1};

        for (int i = 0; i < y; ++i)
        {
            for (int j = 0; j < x; ++j)
            {
                int t = 0, c = 0;

                // 이웃 셀 탐색
                for (int di : directions)
                {
                    for (int dj : directions)
                    {
                        int ni = i + di;  // 새로운 행
                        int nj = j + dj;  // 새로운 열

                        // 배열 범위 확인
                        if (ni >= 0 && ni < y && nj >= 0 && nj < x)
                        {
                            t += img[ni][nj];
                            c++;
                        }
                    }
                }

                // 평균 계산
                result[i][j] = t / c;
            }
        }

        return result;
    }
};
