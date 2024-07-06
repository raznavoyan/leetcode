class Solution {
public:
    int pivotIndex(vector<int>& nums) {
        int sum = 0;
        for (int element : nums){
            sum += element;
        }
        int corentSum = 0;
        for(int i = 0; i < nums.size(); ++i){
            if((sum - nums[i]) == corentSum * 2){
                return i;
            }
            corentSum += nums[i];
        }
        return -1;
    }
};
