#include <stdio.h>
#include <math.h>
void repeated(int x ,int n); // function
int main()
{
     int a;
     printf("enter a num :");
     scanf("%d", &a);
     repeated(1,a);  // calling function
     return 0;
}
void repeated(int x , int n)
{
     if (x>n)
     {
          return; /* base code */
     }
     printf("%d\n", x);
     repeated(x+1,n);       // equation to increasing paremater
     return;  /* return nothing because function type is void and void mean empty*/
}