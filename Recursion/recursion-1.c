#include<stdio.h>
#include<math.h>
void repeated(int n);
int main(){
     int a ;
     printf("enter a num :");
     scanf("%d",&a);
     repeated(a);
     return 0;
}void repeated(int n){
     if (n == 0){
       return ;              /* base code */
     }
     printf("%d\n",n);
     repeated(n-1);
     printf("%d\n", n);
     return;
}