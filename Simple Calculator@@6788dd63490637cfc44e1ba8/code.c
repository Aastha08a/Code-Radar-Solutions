#include<stdio.h>

int main(){

    int a,b,result;
    scanf("%d %d",&a,&b);

    char op;
    scanf("%c",&op);


    if( op == '+'){
        printf("%d",a+b);
    }
    else if( op == '-'){
        printf("%d",a-b);
    }
    else if( op == '*'){
        printf("%d",a*b);
    }
    else if( op == '/'){
        printf("%d",a/b);
    }

    else{
        printf("Invalid operator");
    }

    return 0;
}