/*write a function to count the 
occurrence of vowels in a string
 */
#include"stdio.h"
#include"string.h"
int countvowels(char str[]){
    int i,count = 0 ;
    for ( i = 0; str[i] != '\0' ; i++){
             if (str[i]== 'a' || str[i] == 'e' || str[i]== 'i'|| str[i] == 'o'|| str[i]=='u'){
                   
          
         }
                                                 
    }
    return count;

}
int main(void){
  char str[100];
  fgets(str,100, stdin);
  printf("vowels of input number is %d"
  ,countvowels(str));

     return 0;
}