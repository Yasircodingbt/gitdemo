
#include"stdio.h"
#include"string.h"
/*
discription : check if a give character is present in a string
        ! or not 

*/
void check_char(char str[],char ch); // *check character
int main(void){
     printf("enter your sentences\n");
          char str[100];
             fgets(str,100,stdin);
     printf("now check the give character\n");        
       char user;
              scanf("%c",&user);
   check_char(str,user);

       return 0;
}
void check_char(char str[],char ch){
int i;
      for ( i = 0; str[i] != '\0'; i++){
          if(ch == str[i]){
               printf("yes this character is present in your sentence\n");
          return;
        }
      }
      printf("no this character is No present in your sentence\n");
}