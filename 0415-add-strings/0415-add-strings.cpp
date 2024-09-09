class Solution
{
public:
    string addStrings(string num1, string num2)
    {
        if (num1.size() < num2.size())
        {
            swap(num1, num2);
        }

        string result = "";
        int carry = 0;
        int len1 = num1.size();
        int len2 = num2.size();
        for (int i = 0; i < len1; ++i)
        {
            int a = num1[len1 - 1 - i] - '0';
            int b = len2 > i ? num2[len2 - 1 - i] - '0' : 0;
            int sum = a + b + carry;

            carry = sum / 10;
            result.push_back((sum % 10) + '0');
        }

        if (carry != 0)
        {
            result.push_back(carry + '0');
        }

        reverse(result.begin(), result.end());

        return result;
    }
};