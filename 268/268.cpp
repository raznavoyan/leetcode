class Solution {
public:
    int missingNumber(vector<int>& nums) { 
        int ancwer = 0;
        int s = nums.size();
        for(int i = 0 ; i < s; ++i){
            ancwer ^= i + 1;
            ancwer ^= nums[i];
        }
        return ancwer;
    }
};
