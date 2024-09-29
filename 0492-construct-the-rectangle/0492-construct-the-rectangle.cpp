class Solution
{
public:
    vector<int> constructRectangle(int area)
    {
        for (int w = sqrt(area); w > 0; --w)
        {
            if (area % w == 0)
            {
                int h = area / w;
                return vector<int>{h, w};
            }
        }

        return vector<int>();
    }
};