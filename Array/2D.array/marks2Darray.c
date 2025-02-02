#include<stdio.h>
#include<math.h>
int main(){
     int marks[2][3];
     marks[0][0] = 90;
     marks[0][1] = 56;
     marks[0][2] = 87;

     marks[1][0] = 56;
     marks[1][1] = 47;
     marks[1][2] = 45;

printf("number of student marks %d \n",marks[0][0]);
printf("number of student marks %d\n", marks[0][1]);
printf("number of student marks %d \n", marks[0][2]);
printf("number of student marks %d \n", marks[1][0]);
printf("number of student marks %d \n", marks[1][1]);
printf("number of student marks %d \n", marks[1][2]);

return 0;
}