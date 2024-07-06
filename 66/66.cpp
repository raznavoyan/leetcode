class Solution {
public:
    vector<int> plusOne(vector<int>& digits) {
        char carry = 0;
        int i = digits.size() - 1;
        while(i > -1){            
            digits[i] += 1;
            carry = digits[i] / 10;
            if(carry){
                digits[i] %= 10;
            }else{
                break;
            }
            --i;
        }
        if(carry){
            digits.insert(digits.begin(), carry);
        }
        return digits;
    }
};
