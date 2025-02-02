
/*this porgram tell us the use of strlen library function that calculate the 
lenght of strings*/

#include"stdio.h"
#include"string.h"
void print(char name[]){
      //fgets(name,100,stdin);
      int lenght = strlen(name);
   printf("lenght is %d \n",lenght);
   return;
}
int main()
{
  char name[100] = "yasir balali" ;
  char user_name[100];
  fgets(user_name, 100, stdin);
  int lenght = strlen(user_name)-1;
  printf(" the lenght of your enter name %d \n", lenght);
  print(name);
  return 0;
  
}