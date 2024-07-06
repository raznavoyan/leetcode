class Solution {
public:
    bool isHappy(int sum) {
        int lim = 10;
        while (sum != 1) {
            --lim;
            int tmp = sum;
            sum = 0;
            while (tmp) {
                char tmp1 = (tmp % 10);
                sum += (tmp1 * tmp1);
                tmp /= 10;
            }
            if (!lim) {
                return false;
            }
        }
        return true;
    }
};
