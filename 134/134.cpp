class Solution {
public:
    int canCompleteCircuit(std::vector<int>& gas, std::vector<int>& cost) {
        const int size = gas.size();
 
        int gasTotal = 0;
        int costTotal = 0;
        int balance = 0;
        int minBalance = 0;
        int minBalanceIdx = 0;
        for (int i = 0; i < size; ++i) {
            gasTotal += gas[i];
            costTotal += cost[i];

            balance += gas[i];
            balance -= cost[i];
            if (balance < minBalance) {
                minBalance = balance;
                minBalanceIdx = (i + 1) % size;
            }
        }
        return (gasTotal < costTotal) ? -1 : minBalanceIdx;
    }
};
