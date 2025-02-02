#include<stdio.h>
#include<math.h>
int power(int a , int b){
     if (b == 0 ){
          return 1;
     }
     
     if (b == 1){
      return a;
     }
     int x = power(a,b/2);
     if (b%2 == 0){
          return x*x;
     }else{
          return x*x*a;
     }
} 
int main(){
 int x , y;
 printf("enter a number : ");
 scanf("%d",&x);
 printf("enter a number : ");
 scanf("%d", &y);
 int p = power(x,y);
 printf("answer is %d \n",p);
}