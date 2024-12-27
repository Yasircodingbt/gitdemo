/*write a function to calulatee the nth 
fiboncci number using recursion*/


#include<stdio.h>
#include<math.h>
#include<string.h>
int fibo(int n){
     if(n ==1 || n == 2 ){   // base code
            return 1;
     }
     return fibo(n-1) + fibo(n-2);  /*multiple function calling*/
}
int main(){
     int a;
   printf("enter a number :");
   scanf("%d",&a);
   printf("the fibonacci number is : %d",fibo(a));
}
