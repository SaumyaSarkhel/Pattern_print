

#include<stdio.h>

int main(){
  int n, i, j;
  printf("Enter size: ");
  scanf("%d", &n);

  for(i=1; i<=n; i++){
    for(j=1; j<=n; j++){

        if(i==1 || i==n) {

          if(i==j) printf("$ ");
          else printf("* ");
        }
        else if(j==1 || j==n){
        printf("* ");
        }
        else{
          if(i==j) printf("$ ");
          else printf("  ");
        }
    }
    printf("\n");
  }
  return 0;
}





// #include<stdio.h>

// int main(){
//   int n,i,j;
//   printf("Enter the size: ");
//   scanf("%d", &n);

//   for(i=1; i<=n; i++){
//     for(j=1; j<=n; j++){

//         if((i==1 || i==n || j==1 || j==n) && (i!=j)){
//           printf("* ");
//         }
//         else if(i==j){
//           printf("$ ");
//         }
//         else printf("  ");
//     }
//     printf("\n");
//   }
//   return 0;
// }