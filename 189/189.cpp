class Solution {
public:
    void rotate(vector<int>& nums, int k) {
        k %= nums.size();
        k = nums.size() - k;
        nums.insert(nums.end(), nums.begin(), nums.begin() + k);
        nums.erase(nums.begin(), nums.begin() + k);
    }
};
