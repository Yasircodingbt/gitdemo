#include<stdio.h>
#include<stdio.h>
 typedef struct student {   
    int roll ;
    char name[100];
    float cgpa;
}stu; // student 
void printInFo(stu s1);

int main(){
     stu s1 ={543,"yasir",3.4};
    printInFo(s1);
    return 0;
}
void printInFo(stu s1){
   printf("student information : \n");
   printf("roll number : %d\n",s1.roll);
   printf("name information : %s\n",s1.name);
   printf("cgpa reault :%f\n",s1.cgpa);

   return;
}