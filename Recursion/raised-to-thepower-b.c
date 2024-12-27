/*make a function which calulates 'a' 
raised to the power 'b' using recursion*/
#include<stdio.h>
#include<time.h>
#include<math.h>
    int power(int x, int y);
int main(){
int a,b;
printf("enter a number : ");
scanf("%d", &a);
printf("enter a number : ");
scanf("%d", &b);
 int p = power(a,b);
 printf("%d \n",p);
 /* simple method of power function*/
int sample = pow(2,8);
  printf("answer power is %d",sample);

return 0;

}int power(int x, int y){
      if(y == 0 ){
          return 1;
      }
 return x*power(x,y-1);

}
