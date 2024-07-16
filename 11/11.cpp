class Solution {
public:
    int maxArea(vector<int>& height) {
        int n = height.size();
        int max_area=0;
        int curr=0;
        int left =0;
        int right = n-1;
        while(left<right){
            curr = (right-left)*min(height[left],height[right]);
            if(curr>max_area){
                max_area = curr;
            }
            if(height[left]>height[right]){
                right--;
            }else
                left++;
        }
        return max_area;
       
    }
};
