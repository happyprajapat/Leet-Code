class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int profit=0;
        int i=0;
        for(int j=1;j<prices.size();j++,i++)
        {
            if(prices[i]<prices[j])
            {
                profit+=prices[j]-prices[i];
            }   
        }
        return profit;
    }
};