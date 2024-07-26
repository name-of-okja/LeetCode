class Solution
{
public:
    int addDigits(int num)
    {
        while (num > 9)
        {
            num = pro(num);
        }

        return num;
    }

private:
    int pro(int num)
    {
        int result = 0;
        while (num > 0)
        {
            result += num % 10;
            num /= 10;
        }

        return result;
    }
};