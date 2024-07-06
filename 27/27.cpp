class Solution {
public:
    int removeElement(vector<int>& nums, int val) {
        int i = 0;
        for(; i < nums.size(); ++i){
            if(nums[i] == val){
                nums.erase(nums.begin() + i);
                --i;
            }
        }
        return i;
    }
};
