#include<stdio.h>

int main(){
    int a;
    scanf("%d",&a);

    if(a%100==0 && a%400!=0){
        printf("Not a Leap Year");
    }
    else if(a%4==00){
        printf("Leap Year");
    }
    else{
        printf("Leap Year");
    }
}