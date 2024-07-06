class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        int corentSum = INT_MIN;
        int sum = 0;
        for(int i = 0; i < nums.size(); ++i){
            sum = max(nums[i], sum + nums[i]);
            corentSum = max(corentSum, sum);           
            /// std::cout << sum << '\t' << corentSum << '\t' << nums[i] << std::endl;
        }
        return corentSum;
    }
};
