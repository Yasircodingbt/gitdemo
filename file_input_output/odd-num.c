#include<stdio.h>
int main(){
  FILE *ptr;
  ptr = fopen("odd-num.txt","w");
  int n;
  printf("enter number : ");
  scanf("%d",&n);
  for (int  i = 0; i <= n; i++){
      if (i%2 != 0 ){
        fprintf(ptr,"the list of odd num %d\n",i);    
      }
  }
    return 0;
}