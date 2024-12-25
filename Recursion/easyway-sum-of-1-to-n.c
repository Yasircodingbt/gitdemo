// sum of 1 to n using recursion

#include <stdio.h>
#include <math.h>
 
int sum(int n); // function
int main()
{
     int n;
     printf("enter a num :");
     scanf("%d", &n);
     int s = sum(n);      // function calling
     printf("the sum of %d is %d", n, s);
     return 0;
}
int sum(int x)
{
     if (x == 1 || x == 0)  // base code
     { 
          return 1; 
     }
      int n = x + sum(x - 1);  //  using formula of sum x+(x-1)
  return n;
}