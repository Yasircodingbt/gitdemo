/*make a function which calulates 'a' 
raised to the power 'b' using recursion*/
#include<stdio.h>
#include<time.h>
#include<math.h>
int power(int a, int b);
int main(){
int a,b;
printf("enter a number : ");
scanf("%d", &a);
printf("enter a number : ");
scanf("%d", &b);
 int p = power(a,b);
 printf("%d",p);

return 0;

}int power(int a, int b){
      if(b == 0 ){
          return 1;
      }
 return a*power(a,b-1);

}
