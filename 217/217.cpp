class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {
        std::set<int> map;
        for(int& elem : nums){
            if(map.find(elem) != map.end()){
                return true;
            }
            map.insert(elem);
        }
        return false;
    }
};
