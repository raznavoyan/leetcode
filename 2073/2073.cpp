class Solution {
public:
    int timeRequiredToBuy(vector<int>& tic, int k) {
        int count = tic[k];
        int time = count;
        for(int i = 0; i < k; ++i){
            if(tic[i] < count){
                time += tic[i];
            }else{
                time += count;
            }
        }
        --count;

        for(int i = tic.size() - 1; i > k; --i){
            if(tic[i] < count){
                time += tic[i];
            }else{
                time += count;
            }
        }
        return time;
    }
};
