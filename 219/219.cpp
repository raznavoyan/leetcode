class Solution {
public:
    bool containsNearbyDuplicate(vector<int>& nums, int k) {
        int size = nums.size() - 1;
        for(int i = 0; i < size; ++i){
            for(int j = std::min(i + k, size); j > i; --j){
                if(nums[i] == nums[j]){
                    return true;
                }
            }
        }
        return false;
    }
};
