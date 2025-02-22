/*    Decription
   make a structure to store bank account information of a customer of abc bank. 
   */
  #include<stdio.h>
  #include<string.h>
  typedef struct bank_account{
     int acc_no;
     char name[100];
  } ba;
  void printInfo(ba acc[],int space);
  int main(){
    ba acc[100];
    int space;
     printf("Create bank Account  name  : ");
     fgets(acc[0].name,100,stdin);  
      printf("create bank account number: ");
      scanf("%d",&acc[0].acc_no);
      printf("Identification is verfied %s",acc[0].name);
                printInfo(acc,space);
           return 0;
  }
  void printInfo(ba acc[],int space){
         printf("Bank Account Name yi hai : %s",acc[0].name);
     printf("Bank account ky number yi hai : %d\n",acc[0].acc_no);
     
             return;
              
  }