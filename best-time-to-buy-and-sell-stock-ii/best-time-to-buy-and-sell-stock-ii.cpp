class Solution {
public:
    int maxProfit(vector<int> &prices)
    {
        int result = 0;
        int buyPrice = prices[0];

        for (int i = 1; i < prices.size(); ++i)
        {
            if (prices[i] > buyPrice)
            {
                result += prices[i] - buyPrice;
                buyPrice = prices[i];
            }
            else
            {
                buyPrice = prices[i];
            }
        }

        return result;
    }
};