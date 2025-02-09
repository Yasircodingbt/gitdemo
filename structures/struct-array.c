#include<stdio.h>
#include<string.h>
struct student{
 int roll ;
 char name[100] ;
 float reault;
};
int main(){
   struct student  com[100];
   com[0].roll = 456;  
   com[0].reault = 50; 
   strcpy(com[0].name,"MUHAMMAD YASIR KURSHEED BALALI"); 
   

     printf("roll number : %d",com[0].roll);
     printf("roll number : %f",com[0].reault);
     printf("roll number : %s\n",com[0].name);
    return 0;

    // initializaion structures
   /*struct student s1 = {657,78,"Yasir!khan"}*/
}