#include <stdio.h>
#include <math.h>
#include <string.h>
#include <time.h>
void swap(int *x, int *y);
int _swap(int a, int b);
int main()
{
     int a = 4;int b = 7;
     swap(&a,&b);
     printf(" a = %d & b = %d \n",a,b );
         

     int c = _swap(a, b);
     printf("%d", a);
     return 0;
} 
//pass by referance
void swap(int *x, int *y){
     int temp = *x;
     *x =*y;
     *y = temp;
     return;
     // pass by value
}int _swap(int a,int b){
     a = a * b;
     return a;
}
