#include <stdio.h>
#include <ctype.h> // For isdigit
int evaluatePostfix(char* postfix) {
    int stack[100];
    int top = -1; 
    int i = 0;

    while (postfix[i] != '\0') {
        if (postfix[i] == ' ') {
            i++;
            continue;
        }

        if (isdigit(postfix[i])) {
            int num = 0;
            while (isdigit(postfix[i])) {
                num = num * 10 + (postfix[i] - '0');
                i++;
            }
            stack[++top] = num;  
            continue;  
        } 

        if (top < 1) {  
            printf("Error: Invalid postfix expression.\n");
            return 0;
        }

        int op2 = stack[top--];
        int op1 = stack[top--];

        switch (postfix[i]) {
            case '+':
                stack[++top] = op1 + op2;
                break;
            case '-':
                stack[++top] = op1 - op2;
                break;
            case '*':
                stack[++top] = op1 * op2;
                break;
            case '/':
                if (op2 == 0) {
                    printf("Error: Division by zero.\n");
                    return 0;
                }
                stack[++top] = op1 / op2;
                break;
            default:
                printf("Error: Unsupported operator %c.\n", postfix[i]);
                return 0;
        }
        i++;  
    }

    if (top != 0) {
        printf("Error: Invalid postfix expression.\n");
        return 0;
    }

    return stack[top];
}

int main() {
    char postfix[100];

    printf("Enter postfix expression: ");
    fgets(postfix, 100, stdin);

    size_t len = 0;
    while (postfix[len] != '\0') {
        if (postfix[len] == '\n') {
            postfix[len] = '\0';
            break;
        }
        len++;
    }

    int result = evaluatePostfix(postfix);

    if (result || (result == 0 && postfix[0] != '\0')) {  
        printf("Result: %d\n", result);
    }

    return 0;
}
