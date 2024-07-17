class Solution {
public:
    int minSubArrayLen(int target, vector<int>& nums) {
        int n = nums.size();
        int i =0;
        int j =0;
        int minl = INT_MAX;
        int sum =0;
        
        while(j<n){
            sum+=nums[j];
            while(sum >= target){
                minl = min(minl , j-i+1);
                sum -= nums[i];
                ++i;           
            }
            ++j;
        }
        return minl == INT_MAX ? 0: minl;
        
        
    }
};
