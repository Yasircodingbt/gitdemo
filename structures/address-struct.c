/*enter address of 5 people
 *house No
 *block
 *city
 *state
*/
#include<stdio.h>
#include<string.h>
typedef struct address  {
    int house_no;
    int block;
    char city[100];
    char state[100];
} ad ;

void printfInFo (struct address);

int main(){

          // not defined by user
     ad s1 = {56,6,"multal","Pakistan"};
   ad s2 = {45,1,"lahore","Arab"};
   ad s3 =  {7,7,"bahawalpur","pakistan"};
   ad s4 = {865,65,"khanpur","punjab"};
   ad s5 = {5422,23,"Ahamd pur east","sindh"};

   puts("person number (1) data : ");
   printf("[1]house no : %d\n",s1.house_no);
   printf("[2]block no : %d\n",s1.block);
   printf("[3]city name : %s",s1.city);
   printf("[4]state : %s",s1.state);
  
   puts("person number (2) data : ");
   printf("[1]house no : %d\n",s2.house_no);
   printf("[2]block no : %d\n",s2.block);
   printf("[3]city name : %s\n",s2.city);
   printf("[4]state : %s\n",s2.state);
  

   puts("person number (3) data : ");
   printf("[1]house no : %d\n",s3.house_no);
   printf("[2]block no : %d\n",s3.block);
   printf("[3]city name : %s\n",s3.city);
   printf("[4]state : %s\n",s3.state);
   
   puts("person number (4) data : ");
   printf("[1]house no : %d\n",s4.house_no);
   printf("[2]block no : %d\n",s4.block);
   printf("[3]city name : %s\n",s4.city);
   printf("[4]state : %s\n",s4.state);

   puts("person number (5) data : ");
   printf("[1]house no : %d\n",s5.house_no);
   printf("[2]block no : %d\n",s5.block);
   printf("[3]city name : %s\n",s5.city);
   printf("[4]state : %s\n",s5.state);
 
}