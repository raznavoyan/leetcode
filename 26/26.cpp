class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        int tmp = 111;
        int count = 0;
        for(int i = 0; i < nums.size(); ++i){
            if(nums[i]!= tmp){
                nums[count] = nums[i];
                tmp = nums[i];
                ++count;
            }
        }
        return count ;
    }
};
