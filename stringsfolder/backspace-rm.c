#include<stdio.h>
#include<string.h>
void rm_backspace(char str[]);
int main(void){
    char str[100];
     printf("enter a sentence : ");
       fgets(str,100,stdin);
          rm_backspace(str);
            printf("modified sentence :");
              puts(str);

}
void rm_backspace(char str[]){
    int i ;
    int count = 0;
      for(i = 0 ; str[i] != '\0'; i++){
            if(str[i] != ' '){
               str[count++] = str[i];
            }   
         }
            str[count] = '\0';
                  return;
}