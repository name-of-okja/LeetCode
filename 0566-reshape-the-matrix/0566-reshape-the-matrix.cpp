class Solution
{
public:
    vector<vector<int>> matrixReshape(vector<vector<int>> &mat, int r, int c)
    {
        if (mat[0].size() * mat.size() != r * c)
        {
            return mat;
        }
        vector<vector<int>> vv;
        int rows = mat.size();
        int columns = mat[0].size();
        int row = 0, column = 0;

        vector<int> v(c);
        for (int i = 0; i < r; ++i)
        {
            vv.push_back(v);
        }

        for (int i = 0; i < rows; ++i)
        {
            for (int j = 0; j < columns; ++j)
            {
                vv[row][column] = mat[i][j];
                ++column;
                if (column == c)
                {
                    column = 0;
                    ++row;
                }
            }
        }

        return vv;
    }
};