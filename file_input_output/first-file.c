/*description
   make a program to input student information from the user  & enter it to a file
*/
#include<stdio.h>
typedef struct student{
  char name[100];
  int age ;
  float cgpa;
}stu;
int main(){
FILE *fptr;
fptr = fopen("first-file.txt","w");
   stu s;
   printf("enter student name : ");
   fgets(s.name,100,stdin);
    printf("enter student Age : ");
    scanf("%d",&s.age);
    printf("enter student Cgpa : ");
   scanf("%f",&s.cgpa);
    // int d = s.cgpa*10000/10000;                    d = division
  fprintf(fptr,"Name is %s",s.name);
  fprintf(fptr,"Age is %d\n",s.age);
  fprintf(fptr,"Cgpa is %f",s.cgpa/*d*/);
         fclose(fptr);
  return 0;
}