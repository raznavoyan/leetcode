class Solution {
public:
    int jump(vector<int>& nums) {
        if (nums.size() == 1) return 0;
        int jumps = 1, currentEnd = nums[0], farthest = 0 + nums[0];
        for (int i = 1; i < nums.size() - 1; ++i) {
            farthest = max(farthest, i + nums[i]);
            if (i == currentEnd) {
                jumps++;
                currentEnd = farthest;
                if (currentEnd >= nums.size() - 1) break;
            }
        }
        
        return jumps;
    }
};
