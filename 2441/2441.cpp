class Solution {
public:
    int findMaxK(vector<int>& nums) {
        int size = nums.size();
        int neg = 0;
        int pos = size - 1;

        for (int j = neg + 1; j <= pos; ++j) {
            if (nums[j - 1] > nums[j]) {
                std::swap(nums[j], nums[j - 1]);
            }
        }

        for (int j = pos; j > neg; --j) {
            if (nums[j - 1] > nums[j]) {
                std::swap(nums[j], nums[j - 1]);
            }
        }
/*
        for (auto k : nums) {
            std::cout << k << ' ';
        }
        std::cout << std::endl;
*/
        for (int i = neg; neg < pos; ++i) {
            if ((-nums[neg]) < (nums[pos])) {
                for (int j = neg + 1; j <= pos; ++j) {
                    if (nums[j - 1] > nums[j]) {
                        std::swap(nums[j], nums[j - 1]);
                    }
                }
                --pos;
//              std::cout << "<- ";
            } else if ((-nums[neg]) > (nums[pos])) {
                for (int j = size - 1; j > 0; --j) {
                    if (nums[j - 1] > nums[j]) {
                        std::swap(nums[j], nums[j - 1]);
                    }
                }
                ++neg;
//              std::cout << "-> ";
            } else {
                return nums[pos];
            }
/*          for (auto k : nums) {
                std::cout << k << ' ';
            }
            std::cout << std::endl;
*/      }

        return -1;
    }
};
