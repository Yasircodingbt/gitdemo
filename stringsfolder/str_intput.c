#include"stdio.h"
#include"string.h"
/*
discription : Take a str input from the user using 
  *%c
*/
int main(void){
  char str[100];
  char ch;
  int i = 0;
  while (ch != '\n'){
     scanf("%c",&ch);
     str[i] = ch ;
     i++;
  }
    str[i] = '\0';
    puts(str);

     return 0;
}