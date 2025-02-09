/*
  *heading :salting
  discripton : find the saited form of a password entered by user if the 
  salt is "123" & added at the end
*/
#include"stdio.h"
#include<string.h>
void salted(char password[]);
int main(void){
   char password[100];
     scanf("%s",password);
        salted(password);
             return 0;
}
void salted(char password[]){
   char salt[] = "123";
          char new[200];
              strcpy(new,password);   //new = "test";
                   strcat(new,salt);    //new = "test" join with 123;
                       puts(new);

                        return;
}