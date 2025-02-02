#include"stdio.h"
/* the library function is 
 *strcpy(newstring,oldstring)*/
int main(){
   char g[50] = "old string";
   char h[45] = "new string";
     strcpy(g,h);
     puts(g);
    puts(h);

     return 0;
}