#include <stdio.h>

int main() {
    int a, b;
    char op;

    printf("");
    scanf("%d %d %c",&a,&b,&op);

    if (op == '+') {
        printf("%d", a + b);
    } 
    else if (op == '-') {
        printf("%d", a - b);
    } 
    else if (op == '*') {
        printf("%d", a * b);
    } 
    else if (op == '/') {
        if (b == 0) {
            printf("error");
        } else {
            printf("%d", a / b);
        }
    } 
    else {
        printf("Invalid operator\n");
    }

    return 0;
}
