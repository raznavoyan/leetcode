class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        std::sort(nums.begin(), nums.end());
        vector<vector<int>> ans;
        int s = nums.size();

        for (int a = 0; a < s - 2 && nums[a] < 1; ++a) {
            if (a > 0 && nums[a] == nums[a - 1]) continue; // Skip duplicates for `a`
            int i = a + 1;
            int j = s - 1;
            while (i < j) {
                int sum = nums[a] + nums[i] + nums[j];
                if (sum < 0) {
                    ++i;
                } else if (sum > 0) {
                    --j;
                } else {
                    ans.push_back({nums[a], nums[i], nums[j]});
                    while (i < j && nums[i] == nums[i + 1]) ++i; // Skip duplicates for `i`
                    while (i < j && nums[j] == nums[j - 1]) --j; // Skip duplicates for `j`
                    ++i;
                    --j;
                }
            }
        }

        return ans;
    }
};
