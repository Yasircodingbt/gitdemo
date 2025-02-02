/*   make a program that inputs user's name & prints its lenght
*/


#include<stdio.h>
int lenght(char arr[]){
     int count = 0;
     for (int  i = 0; arr[i] != '\0'; i++){
            count++;
     }
     return count-1;
}int main(){
     char user_name[100];
     fgets(user_name,100,stdin);
  printf(" the lenght of your enter name %d ",lenght(user_name));

      return 0;
 }