#include<stdio.h>
#include<math.h>
#include<string.h>
void alphabet(char a);
int  main(){
char s,b;
printf("Press any key to print the letters of english : ");
scanf("%c",&b);
alphabet(s);

 return 0;
 } void alphabet(char a){
     for (a = 'a'; a <= 'z'; a++)
     {  
          printf("%c",a);
     }
     return;
}