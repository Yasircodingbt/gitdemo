#include<stdio.h>
#include<math.h>
#include<string.h>
int main(){
    char *fullname = "hello world";
    puts(fullname);
    fullname = "world";
    puts(fullname);

     char *connot = "hello world";
     puts(connot);
     connot = "hello";
     puts(connot);
     return 0;
}