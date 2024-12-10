#include<stdio.h>
#include<math.h>
#include<string.h>
#include<time.h> 
int maximun(int *a , int *b);
int main(){
int i , j;
printf("enter num = ");
scanf("%d",&i);
printf("enter  num = ");
scanf("%d",&j); 

 int max = maximun(&i,&j);
 printf(" maximun num is %d", max);

     return 0;
     /*pass by reference*/
}int maximun(int *a , int *b){

  if(*a > *b ){
          return *a;
  }else{
       return *b;
  }
}