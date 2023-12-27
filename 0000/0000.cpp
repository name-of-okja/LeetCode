class Solution {
public:
    int heightChecker(vector<int>& heights) {
        vector<int> map(101, 0);
        for (int i = 0; i < heights.size(); i++)
        {
            map[heights[i]]++;
        }

        int result = 0;
        int map_idx = 0;
        for (int i = 0; i < heights.size(); i++)
        {
            while (map[map_idx] == 0)
            {
                map_idx++;
            }

            if (heights[i] != map_idx)
            {
                result++;
            }

            map[map_idx]--;
        }

        return result;
    }
};