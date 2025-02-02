#include<stdio.h>
#include<math.h>
int largestnumber(int arr[],int size);
int main(){
  int large[8] = {1,2,3,4,5,6,7,8};
  int size = sizeof(large)/sizeof(large[0]);

printf("%d is largest number in array",largestnumber(large,size));

     return 0;
}int largestnumber(int arr[],int size){
     int large = arr[0];
     for (int i = 1; i <size; i++){
         if (arr[i] > large){
             large = arr[i];
         }  
     }
     return large;
}