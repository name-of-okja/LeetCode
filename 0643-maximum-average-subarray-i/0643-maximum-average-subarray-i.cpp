class Solution
{
public:
    double findMaxAverage(vector<int> &nums, int k)
    {
        double v = 0;
        for (int i = 0; i < k; ++i)
        {
            v += nums[i];
        }

        double maxSum = v;
        int i = 0, j = k, l = nums.size();
        while (j < l)
        {
            v = (v - nums[i]) + nums[j];
            maxSum = max(maxSum, v);
            ++i;
            ++j;
        }

        return maxSum / k;
    }
};