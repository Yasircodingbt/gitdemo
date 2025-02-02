
/*write a program to enter the price of 3 terms  
& print their final cost with gst*/

#include<stdio.h>
#include<math.h>
int main(){
 float price[3];
 printf("enter prices : ");
 scanf("%f",&price[0]);
 scanf("%f",&price[1]);
 scanf("%f",&price[2]);

 printf("final Price of 1 terms with gst : %f \n", price[0] + (0.18 * price[0]));
 printf("final Price of 2 terms with gst : %f \n", price[1] + (0.18 * price[1]));
 printf("final Price of 3 terms with gst : %f \n", price[2] + (0.18 * price[2]));

 return 0;
}