#include<stdio.h>

int main(){

    int n;
    printf("");
    scanf("%d",&n);

    for(int i=1; i<=n; i++){
        for(int j=1; j<=n-i; j++){
            printf(" ");
        }

        for( int k=1; k<=n; k++){
            for(int l=1; l<=2*k-1; l++){
                printf("*");
            }
        }

        printf("\n");
        
    }

}