#include<stdio.h>

int main(){
    int a,b;
    scanf("%d",&a,&b);

    if(b > a){
        printf("Profit");
    }
    else if(a == b){
        printf("Equal");
    }
    else{
        printf("Loss");
    }
}