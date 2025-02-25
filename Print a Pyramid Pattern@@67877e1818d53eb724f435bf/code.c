#include<stdio.h>

int main(){

    int i, j, n;
    printf("");
    scanf("%d",&n);

    for(i=1; i<=n; i++){
        for(j=1; j<=n-i; j++){
            printf(" ");
        }

        for( int k=1; k<=n; k++){
            for(int l=1; l<=2k-1; l++){
                printf("*");
            }
        }

        printf("\n");
        
    }

}