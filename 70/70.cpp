class Solution {
public:
    int climbStairs(int n) {
        int a = 0;
        int b = 1;
        for(int i = 0; i < n; ++i){
            long tmp = a + b;
            a = b;
            b = tmp;
        }
        if(n % 2){
            return b;
        } 
        return b;
    }
};
