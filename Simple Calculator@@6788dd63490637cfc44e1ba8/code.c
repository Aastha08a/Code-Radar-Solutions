#include<stdio.h>

int main(){

    int a,b,result;
    char op;

    printf("");
    scanf("%d %d %op",&a,&b,&op);

    if( op == '+'){
        printf("%d", a + b);
    }
    else if( op == '-'){
        printf("%d", a - b);
    }
    else if( op == '*'){
        printf("%d", a * b);
    }
    else if( op == '/'){
        printf("%d", a / b);
    }

    else{
        printf("Invalid operator");
    }

    return 0;
}