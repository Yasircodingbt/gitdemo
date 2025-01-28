/*
 discription : wirte a function named 
 *slice
 which takes a string & return a sliced string from 
 !index n to m
*/
#include"stdio.h"
#include"string.h"
void slice(char str[],int n,int m);
int main(void){ 
 char str[100];
  scanf("%s",str);
  int n,m;
  scanf("%d%d",&n,&m);
  slice(str,n,m);


   return 0;
}
void slice(char str[],int n,int m){
   char newstr[100];
   int j = 0;
   for(int i = n;i <=m;i++,j++){
            newstr[j] = str[i];
   }
    newstr[j] = '\0';
    puts(newstr);

}