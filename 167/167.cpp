class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        int s = 0;
        int e = nums.size() - 1;
        int tmp = nums[s] + nums[e];
        while (tmp != target) {
            if (tmp < target) {
                ++s;
            } else {
                --e;
            }
            tmp = nums[s] + nums[e];
        }

        return {s + 1, e + 1};
    }
};
