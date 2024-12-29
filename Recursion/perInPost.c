/*per in Post*/
#include<stdio.h>
#include<math.h>
void perInPost(int n){
     if(n == 0)      // base code
     return ;
         printf("%d",n);
         perInPost(n-1);
         printf("%d",n);
         perInPost(n-1); 
       printf("%d",n);
       return ;
}
int main(){
     int n;
     printf("enter  a number :");
     scanf("%d",&n);
      
      perInPost(n);
      return 0;
}