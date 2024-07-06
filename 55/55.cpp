#pragma GCC optimize(O3)
class Solution {
public:
    bool canJump(vector<int>& nums) {
        ios_base::sync_with_stdio(false);
        cin.tie(0); cout.tie(0);
       // if (nums.size() < 2) {
        //    return true;
       // }
        for (int i = 0; i < nums.size() - 1; ++i) {
            if (0 == nums[i]) {
                bool flag = true;
                for (int j = i - 1; j >= 0; --j) {
                    if (nums[j] > i - j) {
                        flag = false;
                        break;
                    }
                }
                if (flag) {
                    return false;
                }
            }
        }
        return true;
    }
};
