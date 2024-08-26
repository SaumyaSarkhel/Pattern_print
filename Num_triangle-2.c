
#include<stdio.h>

int main(){
  int n, i, j, k;
  printf("Enter number of rows: ");
  scanf("%d", &n);

  k=1;
  for(i=1; i<=n; i++){
    for(j=1; j<=i; j++){
      printf("%d ", k);
      k+=1;
    }
    printf("\n");
  }
  return 0;
}