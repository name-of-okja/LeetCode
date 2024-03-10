class Solution {
public:
    vector<int> getRow(int rowIndex)
    {
        vector<int> result(rowIndex + 1, 0);

        result[0] = 1;

        // row0 :: row0[0] = 1;
        // row1 :: row0[0], (0 + row0[0]) = 1, 1;
        // row2 :: row0[0], (0 + row1[0] + row1[1]), (0 + row1[1]) = 1, 2, 1;
        for (int i = 1; i < rowIndex + 1; i++)
        {
            for (int j = i; j >= 1; j--)
            {
                result[j] += result[j - 1];
            }
        }

        return result;
    }
};