#include<stdio.h>
#include<math.h>

int main(){
     int a,b,temp;
     printf("enter a num : ");
     scanf("%d",&a);
     printf("enter a sec num : ");
     scanf("%d",&b);

temp = a;
a =b;
b = temp;
printf("enter a swap num  (a) is %d",a);
     return 0;
}