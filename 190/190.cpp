
class Solution {
public:
    uint32_t reverseBits(uint32_t n) {
        uint32_t result = 0;
        for (int i = 0; i < 32; ++i) {
            result <<= 1;            // Shift result left by 1 bit to make space for the new bit.
            result |= (n & 1);       // Extract the least significant bit of n and add it to result.
            n >>= 1;                 // Shift n right by 1 bit to process the next bit.
        }
        return result;
    }
};

// class Solution {
// public:
//     uint32_t reverseBits(uint32_t n) {
//         uint32_t s = 1;
//         uint32_t e = 1 << 31;
//         while (s < e) {
//             bool i = n & s;
//             bool j = n & e;
//             if (i != j) { // Only swap if bits are different
//                 n ^= s;
//                 n ^= e;
//             }
//             s <<= 1;
//             e >>= 1;
//         }
//         return n;
//     }
// };
