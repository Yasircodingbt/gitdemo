/*create a structure to store complex number 
                (use arrow opertor)                  */
#include"stdio.h"
#include"string.h"
typedef struct complex{
  int  real;
  int img; 

}co;
int main(){
    co rea_img ={5,7};
     co *ptr = &rea_img;
     printf("real valuse : %d \n",ptr->real);
     printf("imager valuse : %d \n",ptr->img);
     
    return 0;
}