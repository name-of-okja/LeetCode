class Solution
{
public:
    string toHex(int num)
    {
        if (num == 0)
        {
            return "0";
        }

        unsigned int _num = num;
        string hex = "0123456789abcdef";
        string result;

        while (_num)
        {
            result += hex[_num % 16];
            _num /= 16;
        }

        reverse(result.begin(), result.end());
        return result;
    }
};