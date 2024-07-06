class Solution {
public:
    void sortColors(vector<int>& nums) {
        int redE = 0;
        int blueS = nums.size() -1;
        int witeS = 0;
        for(int i = 0; i <= blueS; ++i){
            if(nums[i] == 0){
                std::swap(nums[redE], nums[i]);
                ++redE;
                continue;
            }
            if(nums[i] == 2){
                std::swap(nums[i], nums[blueS]);
                --blueS;
                --i;
            }
            //for(int i = 0; i < nums.size(); ++i){
            //    std::cout << nums[i] << '\t';
            //}
            //std::cout << std::endl;
        }
    }
};
