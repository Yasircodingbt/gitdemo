#include<stdio.h>
#include<math.h>
#include<string.h>
#include<time.h>
void square (int* n);
int main(){
 int n =4;
 square(&n);
 printf(" number %d\n",n);

return 0;

}void square(int* n){
     *n =(*n)*(*n);
     printf("square : %d \n",*n);
     return;
}
