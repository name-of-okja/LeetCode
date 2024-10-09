class Solution
{
public:
    bool checkPerfectNumber(int num)
    {
        if (num < 2 || num % 2 != 0)
        {
            return false;
        }

        int sum = 0;
        int range = (num / 2);
        for (int i = 1; i <= range; ++i)
        {
            if (num % i == 0)
            {
                sum += i;
            }
        }

        return sum == num;
    }
};