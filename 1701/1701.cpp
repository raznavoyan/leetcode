class Solution {
public:
    double averageWaitingTime(vector<vector<int>>& c) {
        int w = 0;
        double s = static_cast<double>(c.size());
        double res = 0;
        int time = 0;
        for(auto& it : c){
            w -= (it[0] - time);
            w = w < 0 ? 0 : w;
            time = it[0];
            res += (static_cast<double>(w + it[1]))/s;
            w += it[1];
        }

        return res;
    }
};
