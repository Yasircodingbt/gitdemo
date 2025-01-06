#include<stdio.h>
#include<math.h>
int main(){
   int age = 17;
   int _age = 20;
   int *ptr = &age;
   int *_ptr = &_age; 
   printf(" %u , %u difference  = %d \n",ptr,_ptr, ptr-_ptr);
   _ptr = &age;
   printf("comperison = %u \n",ptr == _ptr);
     return 0;
}