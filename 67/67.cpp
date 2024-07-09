class Solution {
public:
    std::string addBinary(std::string a, std::string b) {
        std::string result = "";
        int carry = 0;
        int i = a.size() - 1;
        int j = b.size() - 1;
        
        while (i >= 0 || j >= 0 || carry) {
            if (i >= 0) carry += a[i--] - '0';
            if (j >= 0) carry += b[j--] - '0';
            
            result = (char)('0' + (carry % 2)) + result;
            carry /= 2;
        }
        
        // std::reverse(result.begin(), result.end());
        return result;
    }
};

// class Solution {
//     inline long long int toInt(std::string& s){
//         long long int n = 0;
//         for(int i = 0; i < s.size(); ++i){
//             n = (n<<1) + (s[i] - '0');
//         }

//         return n;
//     }

//     inline std::string toS(long long int n){
//         std::string r;
//         if(!n){return "0";}
//         while(n){
//             r = to_string(n%2) + r;
//             n /= 2;
//         }
//         return r;
//     }
// public:
//     string addBinary(string a, string b) {
//         return toS(toInt(a) + toInt(b));
//     }
// };
