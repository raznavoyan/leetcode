class Solution {
public:
    vector<int> sortedSquares(vector<int>& nums) {
        int i = 0;
        for(; i < nums.size(); ++i){
            if(nums[i] > 0){
                break;
            }
            nums[i] *= -1;
        }

        std::vector<int> tmp;
        int j = i--;
        while(j < nums.size() && i > -1){
            if(nums[i] < nums[j]){
                tmp.push_back(nums[i] * nums[i]);
                --i;
            } else {
                tmp.push_back(nums[j] * nums[j]);
                ++j;
            }
        }
        while(i > -1){
            tmp.push_back(nums[i] * nums[i]);
            --i;
        }
        while(j < nums.size()){
            tmp.push_back(nums[j] * nums[j]);
            ++j;
        }
        return tmp;
    }
};
