/*write a program to replace lowcase letters with uppercase 
         & vice versa in a string*/
#include<stdio.h>
#include<string.h>
void low_to_high(char str[]);  // C1 lowercase replace uppercase 
 
int main(void){
  char str[100];   // string for C1
     fgets(str,100,stdin);
         low_to_high(str);
           printf("modified valus %s \n",str);

                       return 0;
} 
void low_to_high(char str[]){
    for (int i = 0; str[i] != '\0'; i++){
          if( str[i] >= 'a' && str[i] <= 'z'){
                str[i] = str[i] - 32;
               }   else if (str[i] >= 'A' && str[i] <= 'Z'){
                      str[i] = str[i] + 32;        
                        }
                         }
            return;
}          