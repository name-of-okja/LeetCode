class Solution
{
public:
    bool hasAlternatingBits(int n)
    {
        vector<int> bits;
        while (n > 0)
        {
            bits.push_back(n % 2);
            n /= 2;
        }
        int l = bits.size();
        for (int i = 1; i < l; ++i)
        {
            if (bits[i - 1] == bits[i])
                return false;
        }

        return true;
    }
};