class Solution
{
public:
    vector<int> countBits(int n)
    {
        int len = n + 1;
        vector<int> v;
        for (int i = 0; i < len; ++i)
        {
            // 0:0 1:1 2:10 3:11 4:100 5:101
            int sum = 0;
            int target = i;
            while (target != 0)
            {
                sum += target % 2;
                target /= 2;
            }

            v.push_back(sum);
        }

        return v;
    }
};