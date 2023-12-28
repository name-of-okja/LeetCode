class Solution {
public:
    int thirdMax(vector<int> &nums)
    {
        long long first, second, third;
        first = second = third = LLONG_MIN;

        for (auto num : nums)
        {
            if (num <= third || num == second || num == first)
            {
                continue;
            }

            third = num;

            if (third > second)
            {
                swap(third, second);
            }

            if (second > first)
            {
                swap(second, first);
            }
        }

        return third == LLONG_MIN ? first : third;
    }
};