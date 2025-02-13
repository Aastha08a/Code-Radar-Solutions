#include<stdio.h>

int main(){
    int a,b,result;

    scanf("%d %d",&a,&b);

    char op;

    scanf("%c",&op);

    if(op=='+'){
        result = a+b;
        printf("%d",a+b);
    }
    else if(op=='-'){
        result = a-b;
        printf("%d",result);
    }
    else if(op=='*'){
        result = a*b;
        printf("%d",result);
    }
    else if(op=='/'){
        result = a/b;
        printf("%d",result);
    }
}