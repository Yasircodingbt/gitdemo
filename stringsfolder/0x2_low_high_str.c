#include"stdio.h"
#include"string.h"
void low_to_upper(char str[]);
int main(void){
  char str[100];
  printf("enter the string\n");
       fgets(str,100,stdin);
  low_to_upper(str);
  
  printf("modified vowels are %s \n",str);


     return 0;
}
void low_to_upper(char str[]){
    int i,count = 0;
    for ( i = 0; str[i] != '\0'; i++){
        if (str[i] == 'a'|| str[i] == 'e' || str[i] == 'i' || str[i] == 'o'|| str[i] == 'u'){
                     str[i] = str[i] -32;    
        } 
      }
    
          return;
   } 