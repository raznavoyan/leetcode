class Solution {
public:
    std::vector<std::string> summaryRanges(std::vector<int>& nums) {
        std::vector<std::string> res;
        if (nums.empty())
            return res;

        int start = nums[0];
        for (size_t i = 0; i < nums.size(); ++i) {
            // If we are at the end or the next number is not consecutive
            if (i + 1 == nums.size() || nums[i] + 1 != nums[i + 1]) {
                if (nums[i] == start) {
                    res.push_back(std::to_string(start));
                } else {
                    res.push_back(std::to_string(start) + "->" +
                                  std::to_string(nums[i]));
                }
                if (i + 1 < nums.size())
                    start = nums[i + 1];
            }
        }
        return res;
    }
};
