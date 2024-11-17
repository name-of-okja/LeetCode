class Solution
{
public:
    bool canPlaceFlowers(vector<int> &flowerbed, int n)
    {
        int s = flowerbed.size();
        for (int i = 0; i < s; ++i)
        {
            if (flowerbed[i] == 0)
            {
                if (i == 0 && (s == 1 || flowerbed[i + 1] == 0))
                {
                    --n;
                    flowerbed[i] = 1;
                }
                if (i == (s - 1) && (s == 1 || flowerbed[i - 1] == 0))
                {
                    --n;
                    flowerbed[i] = 1;
                }
                if ((i - 1) > 0 && flowerbed[i - 1] == 0 && (i + 1) < s && flowerbed[i + 1] == 0)
                {
                    --n;
                    flowerbed[i] = 1;
                }
            }
        }

        return n <= 0;
    }
};