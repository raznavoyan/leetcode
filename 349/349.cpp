class Solution {
public:
    vector<int> intersection(vector<int>& nums1, vector<int>& nums2) {
        std::unordered_set<int> v;
        for(auto& it : nums1){
            v.insert(it);
        }
        std::vector<int> ans;
        for(auto& it : nums2){
            if(v.find(it) != v.end()){
                ans.push_back(it);
                v.erase(it);
            }
        }
        return ans;
    }
};
