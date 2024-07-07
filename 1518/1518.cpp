// class Solution {
// public:
//     int numWaterBottles(int numB, int numE) {
//         int count = numB;
//         while(true){
//             int tmp = numB / numE;
//             count += tmp;
//             if((numB = (tmp + numB % numE)) < numE)
//                 break;
//         }
//         return count;
//     }
// };
class Solution {
public:
    int numWaterBottles(int numBottles, int numExchange) {
        return (numExchange <= numBottles) + numBottles + (numBottles - numExchange) / (numExchange - 1);
    }
};
