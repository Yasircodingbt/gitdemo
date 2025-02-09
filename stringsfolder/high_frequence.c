#include<stdio.h>
#include<string.h>
 void frequences_char(char str[]);
 int main(void){
    char str[200];
     printf("enter your string :");
      fgets(str,200,stdin);
          frequences_char(str);

    return 0;
 } 
 void frequences_char(char str[]){
    int max = 0;
    char reault;
    char frq[200] = {0};
    for (int  i = 0; str[i] != '\0'; i++){
          frq[str[i]]++;
         
        }
    
    for(int i = 0; i < 200;i++){
        if(frq[i] > max){
            max = frq[i];
            reault = i;
        }
    }
             printf(" repeating character [%c] & frequence [%d]",reault,max);
             return;
 }