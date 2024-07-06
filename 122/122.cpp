class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int buy = prices[0];
        int sum = 0;
        for (int i = 1; i < prices.size(); ++i) {
            if (prices[i] > buy) {
                sum += prices[i] - buy;
            } 
            buy = prices[i];
        }

        return sum;
    }
};
