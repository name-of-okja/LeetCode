class Solution
{
public:
    int islandPerimeter(vector<vector<int>> &grid)
    {
        int result = 0;
        for (int i = grid.size() - 1; i >= 0; --i)
        {
            for (int j = grid[i].size() - 1; j >= 0; --j)
            {
                if (grid[i][j] == 1)
                {
                    result += 4;

                    if (j > 0 && grid[i][j - 1] == 1)
                    {
                        result -= 2;
                    }
                    if (i > 0 && grid[i - 1][j] == 1)
                    {
                        result -= 2;
                    }
                }
            }
        }
        return result;
    }
};