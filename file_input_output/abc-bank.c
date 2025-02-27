#include<stdio.h>
typedef struct bank_account{

  int acc_no;
  char name[100];
}bac;                /*bank account*/
void printInfo(FILE *fptr,bac alfa[]);
int main(void){
FILE *fptr;
  bac alfa[20];
    printf("Create bank Account  name  : ");
      fgets(alfa[0].name,100,stdin);  
       printf("create bank account number: ");
        scanf("%d",&alfa[0].acc_no);
        printInfo(fptr,alfa);
          return 0;
}void printInfo(FILE *fptr,bac alfa[]){
   fptr = fopen("abc-bank.txt","a");
     if (fptr == NULL){
      printf("error openimg file\n");
      return;
     }
     
          fprintf(fptr,"Identification is verfied %s",alfa[0].name);
            fprintf(fptr,"Bank Account Name yah hai : %s",alfa[0].name);
               fprintf(fptr,"Bank account yah number yi hai : %d\n",alfa[0].acc_no);
                  fclose(fptr);
     return;

} 