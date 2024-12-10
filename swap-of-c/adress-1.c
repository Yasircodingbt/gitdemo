/* will the adress is same  */
#include<stdio.h>
#include<math.h>
 void adress(int *n);
 int main(){
int n ;
printf(" enter a num = ");
scanf("%d",&n);
printf("the memory adress is %u \n",&n);

adress(&n);

     return 0;
 }void adress(int *n){
    printf("  adress is %u \n",n);
    return;

 }