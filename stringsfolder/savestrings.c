/*crete a string firstname &lastname to store details of user 
& print all the charachers using a loop*/

#include<stdio.h>
#include<math.h>
#include<string.h>
void printfstring( char arr[]);
int main(){
     char firstname[]= "yasir";
     char lastname[] = "khan";

     printfstring(firstname);
     printfstring(lastname);

     return 0;
}void printfstring(char arr[]){
     for (char i = 0; arr[i] != '\0'; i++){
             printf("%c",arr[i]);
     }
     printf("\n");
     return;
}