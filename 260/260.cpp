class Solution {
public:
    vector<int> singleNumber(vector<int>& nums) {
        for(int i = 0; i < nums.size() - 1; ++i){
            for(int j = i + 1; j < nums.size(); ++j){
                if(nums[i] == nums[j]){
                    nums.erase(nums.begin() + j);
                    nums.erase(nums.begin() + i);
                    --i;
                    break;
                }
            }
        }
        return nums;
    }
};
