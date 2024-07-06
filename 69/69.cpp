class Solution {
public:
    int mySqrt(int num){
            return 0;
        }
        double x = 1.0;
        int end = 20;
        while(end){
            x = (x + (num / x)) / 2;
            --end;
        }
        return (int)x;
    }
};
