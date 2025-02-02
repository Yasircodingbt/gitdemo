#include<stdio.h>
#include<math.h>
void sum(int a ,int b);  // function
int main(){
     int a,b;

     printf("enter a num : ");
     scanf("%d", &a);
  sum(a,0);    /*calling function*/

     return 0;
}void sum(int a,int b){
  if (a == 0){
     printf("%d",b);  // base code
     return;
  }
     sum(a-1,b+a); //  paremater

     return;
}