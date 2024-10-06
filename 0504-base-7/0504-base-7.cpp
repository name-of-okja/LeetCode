class Solution
{
public:
    string convertToBase7(int num)
    {
        if (num == 0) 
        {
            return "0";
        }
        
        int v = abs(num);
        string result;
        while (v)
        {
            result += to_string(v % 7);
            v /= 7;
        }
        reverse(result.begin(), result.end());

        return num > 0 ? result : "-" + result;
    }
};