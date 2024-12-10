#include<stdio.h>
#include<math.h>
#include<time.h>
#include<string.h>
void print(int a , int b, int *sum , int *avg , int *prod);
int main(){
int a,b, sum,avg,prod;
printf("enter a num  = ");
scanf("%d", &a);
printf("enter a num  = ");
scanf("%d", &b);
print(a, b, &sum,&avg , &prod);
printf(" sum = %d : avg = %d : product = %d", sum , avg , prod);

return 0;
}void print(int a ,int b, int *sum , int *avg , int *prod){
      *sum = a + b;
      *avg = (a + b)/2;
      *prod =  a*b;
     return;
}
