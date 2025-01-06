#include<stdio.h>
#include<math.h>
int main(){
    // int marks = 12;
     //int marks = 13;
     //int marks = 14;

     int marks[3];
     printf("enter math marks : ");
     scanf("%d",&marks[0]);

   printf("enter phy marks : ");
    scanf("%d", &marks[1]);

  printf("enter comp marks : ");
     scanf("%d", &marks[2]);
  printf(" math = %d , phy = %d , comp = %d \n", marks[0],marks[1],marks[2]);
             return 0;
         }
