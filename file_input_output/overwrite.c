#include<stdio.h>
int main(void){
FILE *fptr;
fptr = fopen("overwrite.txt","r");
int a;
int b;
 fscanf(fptr,"%d",&a);
 fscanf(fptr,"%d",&b); 
 fclose(fptr);
  
  fptr = fopen("overwrite.txt","a");
  int sum = a+b;
  fprintf(fptr,"\nthe sum a and b %d",sum);
fclose(fptr);
    return 0;
}