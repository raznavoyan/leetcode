class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        if(nums.size() < 2){
            return nums.size();
        }
        int tmp = nums[0] - 1;
        for(int i = 1; i < nums.size(); ++i){
            if(nums[i] == tmp){
                nums.erase(nums.begin() + i);
                --i;
                continue;
            }
            if(nums[i] == nums[i - 1]){
                tmp = nums[i];
            }   
        }

        return  nums.size();
    }
};
