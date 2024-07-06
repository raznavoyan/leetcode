class Solution {
public:
    void mySort(vector<int>& v){
        int s = v.size();
        for(int j = 0; j < 4; ++j){
            for(int i = 0; i < s - 1; ++i){
                if(v[i] > v[i+1]){
                    int tmp = v[i];
                    v[i] = v[i+1];
                    v[i+1] = tmp;
                }
            }
            for(int i = s - 1; i > 0; --i){
                if(v[i] < v[i - 1]){
                    int tmp = v[i];
                    v[i] = v[i - 1];
                    v[i - 1] = tmp;
                }
            }
        }

    }

    int minDifference(vector<int>& v) {
        int s = v.size();
        if (s < 5) return 0;
        mySort(v);
        // for(auto it : v){
        //     std::cout << it << " ";
        // }
        // std::cout << std::endl;

        return min({v[s - 1] - v[3], v[s - 2] - v[2], v[s - 3] - v[1], v[s - 4] - v[0]});
    }
}; 
