#include<stdio.h>
#include<math.h>
int min(int a, int b);
int gch(int a , int b);
int main(){
     int a ,b;
     printf("enter a 1st number : ");
     scanf("%d",&a);
     printf("enter a 1st number : ");
     scanf("%d", &b);
         int hcf = gch(a ,b);
         printf(" the Hcf/Gcd of %d and %d is : %d" ,a,b,hcf);
     return 0;

} int min(int a, int b){
     if (a<b)
     return a;
     else
     return b;

}int gch(int a,int b){
     int hcf;
     for (int i = min(a,b); i >=1 ; i++){
          if(a%i == 0 && b%i == 0){
            hcf = i;
          }
     
     }
     return hcf;
}