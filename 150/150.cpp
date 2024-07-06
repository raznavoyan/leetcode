#include <stdlib.h>

int evalRPN(char **tokens, int tokensSize) {
    int operands[tokensSize];
    int top = -1;
    for(int i = 0; i < tokensSize; ++i) {
        const char* token = tokens[i];

        if (token[0] < '0' && token[1] == '\0'){
            int b = operands[top];
            int a = operands[--top];
            switch(*(token)) {
                case '+': operands[top] = a + b; break;
                case '-': operands[top] = a - b; break;
                case '*': operands[top] = a * b; break;
                case '/': operands[top] = a / b; break;
            }
            operands[top + 1] = 0;
        } else {
            operands[++top] = atoi(token);
        }
    }

    return operands[top];
}
