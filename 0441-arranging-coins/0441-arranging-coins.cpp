class Solution
{
public:
    int arrangeCoins(int n)
    {
        // k(k + 1)
        // --------  < n
        //    2

        long int discriminant = sqrt(1 + (8L * n));
        int step_no = floor((discriminant - 1) / 2);

        return step_no;
    }
};