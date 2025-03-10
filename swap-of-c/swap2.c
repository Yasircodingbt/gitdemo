#include <stdio.h>
#include <math.h>
void swap(int *a,int *b){
   
  *a = *a + *b;
  *b = *a - *b;
  *a = *a - *b;
    return;
}
int main()
{
     int a, b;
     printf("enter a num : ");
     scanf("%d", &a);
     printf("enter a sec num : ");
     scanf("%d", &b);
    swap(&a,&b);
   printf("%d",a);
   
       return 0;
    
}