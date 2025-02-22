/*create a structure to store vecter. 
      then make a function to return sum of 2 vecter*/
#include<stdio.h>
#include<string.h>
typedef struct vecter{
      int x;
      int y;
}vec;
void  vecter_sum(struct vecter v1,struct vecter v2,struct vecter sum);
int main(){
  int x[34];
  int y[34];

  printf("enter [x] of vecter one : ");
  scanf(" %d",&x[0]);
  printf("enter [y] vecter of one : ");
  scanf(" %d",&y[0]);
  printf("enter [x] vecter of second : ");
  scanf(" %d",&x[1]);
  printf("enter [y] vecter of second : ");
  scanf(" %d",&y[1]);
  vec v1 = {x[0],y[0]};
  vec v2 = {x[1],y[1]};
  struct vecter sum = {0};
  vecter_sum(v1,v2,sum);
    return 0;
}
void vecter_sum(struct vecter v1,struct vecter v2,struct vecter sum){
  sum.x = v1.x + v2.x;
  sum.y = v1.y + v2.y;

  printf("sum of x is %d\n",sum.x);
  printf("sum of y is %d\n",sum.y);

}