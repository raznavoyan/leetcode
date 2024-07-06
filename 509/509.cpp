class Solution {
public:
    int fib(int n) {
        int a = 0;
        int b = 1;
        while(n > 1){
            a = a + b;
            b = a + b;
            n -= 2;
        }

        return n % 2 ? b : a;
    }
};
