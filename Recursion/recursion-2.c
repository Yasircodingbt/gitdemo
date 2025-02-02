#include <stdio.h>
#include <math.h>
int factorial(int n);
int main()
{
     int n;
     printf("enter a num :");
     scanf("%d", &n);
     int fact = factorial(n);
     printf("the factorial of %d is %d", n, fact);
     return 0;
}
int factorial(int x){
     if (x == 1 || x == 0){  // base case
        return 1;
     }
     return x * factorial(x - 1);
}