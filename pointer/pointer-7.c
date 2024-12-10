#include<stdio.h>
#include<math.h>
int prime(int n){
     if(n <=1){
          return 0;
     }for (int i = 2; i*i <=n; i++){
          if(n%i == 0){
               return 0;
          }
     }
     return 1;
}
int main(){

int ok ;
printf("enter a num : ");
scanf("%d",&ok);
if(prime(ok)){
     printf("%d is prime ",ok);
}else{
     printf("%d is not prime",ok);
}

  return 0;
}