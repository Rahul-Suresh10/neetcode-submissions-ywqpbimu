class Solution {
public:
    int maxProfit(vector<int>& prices) {

        int maxProfit = 0;

        for(int i=0;i<prices.size();i++)
        {
            int j = i+1;

            while(j<prices.size())
            {
                if(prices[j] - prices[i] > maxProfit)
                {
                    maxProfit = prices[j] - prices[i];
                }
                j++;
            }
        }
        return maxProfit;
    }
};
