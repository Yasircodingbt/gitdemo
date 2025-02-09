#include<stdio.h>
#include<string.h>
#include<math.h>
// user defined
struct student{
    int roll;
    float cgpa;
    char name[100];
};
int main(){

     struct student s1;
     s1.roll = 314;
     s1.cgpa = 4.6;
     char first[100];
     printf("enter first student : ");
     fgets(first,100,stdin);
     strcpy(s1.name,first);
                             struct student s2;
                             printf("enter your name : ");
                             char name[100];
                             fgets(name,100,stdin);
                             strcpy(s2.name,name);    
                             s2.roll = 34;
                            s2.cgpa = 4.5;
                                                     struct student s3;                             struct student s3;
                                                     s3.roll = 67; 
                                                     s3.cgpa = 3.7;
                                                     char hello[100];
                                                     printf("enter your name :  ");
                                                     strcpy(s3.name,hello);

        printf("(1).first student roll number : %d\n",s1.roll);
             printf("(2).first student name : %s ",s1.name);
                  printf("(3).first  studrnt cgpa : %f\n",s1.cgpa);
                     printf("(1)second student roll number : %d\n",s2.roll);
                          printf("(2)second student name : %s",s2.name);
                               printf("(3)second student cgpa : %f\n",s2.cgpa);
                                       printf("(1).third student roll number  : %d\n",s3.roll);
                                               printf("(2).third student name  : %s",s3.name);
                                                       printf("(3).third student cgpa : %f\n",s3.cgpa);
                           return 0;
}