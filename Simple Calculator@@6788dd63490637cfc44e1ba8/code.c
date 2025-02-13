#include <stdio.h>

int main() {
    int a, b;
    char op;

    printf("");
    scanf("%d %d", &a, &b);
    scanf(" %c", &op);

    if (op == '+') {
        printf("%d\n", a + b);
    } 
    else if (op == '-') {
        printf("%d\n", a - b);
    } 
    else if (op == '*') {
        printf("%d\n", a * b);
    } 
    else if (op == '/') {
        if (b == 0) {
            printf("Error: Division by zero\n");
        } else {
            printf("%d\n", a / b);
        }
    } 
    else {
        printf("Invalid operator\n");
    }

    return 0;
}
