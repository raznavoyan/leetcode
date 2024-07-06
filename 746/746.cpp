class Solution {
public:
   
    int minCostClimbingStairs(vector<int>& cost) {
        const int size = cost.size();
        int& prev2 = cost[0];
        int& prev1 = cost[1];

        for(int i = 2; i < size; ++i)
        {
            int temp = prev1;
            prev1 = std::min((cost[i] + prev2), (cost[i] + prev1));
            prev2 = temp;
        }

        return std::min(prev2, prev1);

    }
};
