#include<stdio.h>

int main(){
    int a,b,;

    scanf("%d %d",&a,&b);

    char op;

    scanf("%c",&op);

    int i,j,k,l;

    if(op='+'){
        i = a+b;
        printf("%d",i);
        break;
    }
    else if(op='-'){
        j = a-b;
        printf("%d",j);
        break;
    }
    else if(op='*'){
        k = a*b;
        printf("%d",k);
        break;
    }
    else if(op='/'){
        l = a/b;
        printf("%d",l);
        break;
    }
}