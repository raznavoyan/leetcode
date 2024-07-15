class Solution {
public:
    int candy(std::vector<int>& ratings) {
        int s = ratings.size();
        std::vector<int> candies(s, 1);

        for (int i = 1; i < s; ++i) {
            if (ratings[i] > ratings[i - 1]) {
                candies[i] = candies[i - 1] + 1;
            }
        }
        int count = candies[s - 1];
        for (int i = s - 2; i >= 0; --i) {
            int& tmp = candies[i];
            if (ratings[i] > ratings[i + 1]) {
                if(!(tmp > (candies[i + 1] + 1))){
                    tmp = candies[i + 1] + 1;
                }
            }
            count += tmp;
        }

        
        // int count = std::accumulate(candies.begin(), candies.end(), 0);


        return count;
    }
};

//work but not fast

// class Solution {
// public:
//     int candy(vector<int>& r) {

//         int s = r.size();
//         if (s < 2) {
//             return s;
//         }
//         std::vector<int> c(s, 1);

//         bool f = true;
//         bool frst = r[0] > r[1];
//         bool last = r[s - 1] > r[s - 2];
//         while (f) {
//             f = false;
//             for (int i = 1; i < s - 1; ++i) {
//                 if((r[i] > r[i - 1] && c[i] <= c[i - 1]) || (r[i] > r[i + 1] && c[i] <= c[i + 1])){
//                     f = true;
//                     ++c[i];
//                 }
//             }
//             if(frst && c[0] <= c[1]){++c[0];f = true;}
//             if(last && c[s - 1] <= c[s -2]){++c[s - 1];f = true;}
//         }

//         int count = std::accumulate(c.begin(), c.end(), 0);

//         return count;
//     }
// };
