const static int maptmp[39] = {
    0,         1,          1,          2,        4,        7,         13,
    24,        44,         81,         149,      274,      504,       927,
    1705,      3136,       5768,       10609,    19513,    35890,     66012,
    121415,    223317,     410744,     755476,   1389537,  2555757,   4700770,
    8646064,   15902591,   29249425,   53798080, 98950096, 181997601, 334745777,
    615693474, 1132436852, 2082876103, 0};
class Solution {
    const int* const map = maptmp;

public:
    int tribonacci(int n) { return map[n]; }
};

/*class Solution {
public:

            unsigned int a = 0;
            unsigned int b = 1;
            unsigned int c = 1;
            while (n > 2) {
                n -= 3;
                int tmp = a + b + c;
                b = tmp - a + tmp;
                c += b + tmp;
                a = tmp;
            }

            if(n == 2){
                return c;
            }
            if(n){
                return b;
            }
            return a;

    }
};*/
