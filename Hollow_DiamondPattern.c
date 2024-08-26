

#include<stdio.h>

int main(){
    int n, i, j, k;
    printf("Enter no of Rows: ");
    scanf("%d", &n);

    for(i=1;i<=n; ++i){

        for(int j=1; j<=n+1-i; j++){ 
            printf("* ");
        }
        for(k=1;k<=2*i-1; k++){
            printf("  ");
        }
        for(int j=1; j<=n+1-i; j++){ 
            printf("* ");
        }
        printf("\n");
    }


    for(i=n-1; i>=1; i--){

        for(j=1; j<=n+1-i; j++){
            printf("* ");
        }
        for(k=1; k<=2*i-1; k++){
            printf("  ");
        }
        for(j=1; j<=n+1-i; j++){
            printf("* ");
        }
        printf("\n");
    }
    return 0;
}


