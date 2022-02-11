#include<stdio.h>  //default header file
#include"deposit.c"  // header file of deposit
#include"withdraw.c"  // header file of withdraw
#include"pinc.c"     // header file for newpin


int main(){
   int balance = 10000;  // declartion of veriables and assigning default 10000 balance
   int pin2;              // for pin of atm card
   int transaction = 1;      
   int moneyDeposit(int balance);    //declaring functions
   int moneyWithdraw(int balance);
   int pinChange(int pin2);
   printf("Please Enter your Card \n");
  printf("#########################################\n");
   printf("Please Enter Your Pin \n");
   printf("#########################################\n");
   
   scanf("%d",&pin2);    //taing input of pin
   if(pin2 > 999 && pin2 <=9999)    // pin must be four degites
   {
   while(transaction == 1)      
   {
   int option;                     // used for selecting for option
   printf("************ WELCOM TO ATM SERVICE ************\n");
   printf("Please Select One of The Option \n");      // options that are in display
   printf("###############################\n");
   printf("Press 1 to CHECK BALANCE \n");
   printf("Press 2 to DEPOSIT AMOUNT \n");
   printf("Press 3 to WITHDRAW AMOUNT \n");
   printf("Press 4 to PIN CHANGE \n");
   printf("Press 5 to Exit \n");
   printf("###############################\n");
   scanf("%d",&option); 
   if(option == 1)
   {
       printf("Your Balance is %d \n",balance);  // to view blance
      
   }
   else if(option == 2){
      balance = moneyDeposit(balance); // function for deposting
       
   }
   else if(option == 3)          // function for withdraw
   {
       balance = moneyWithdraw(balance);
   }
   else if(option == 4)
   {
       pin2=pinChange(pin2); // to change the pin of atm
   }
   else if(option == 5){            
       break;      // for exit
   }
   else
   {
       printf("Invalid Transaction\n");
      
   }
   printf("\n\n   Thank you for using ATM \n");
   printf("#########################################\n");
   transaction = 0;
   while(transaction != 1 && transaction !=2)  // to exit or continue with other transaction
   {
   printf("You want to continue for another transaction  \n");
   printf("###################################################\n");
   printf(" press 1 for YES \n press 2 for EXIT \n");
   printf("#########################################\n");
   scanf("%d",&transaction);
   }
   }
   }
   else{
        printf("Please Enter Correct Pin \n ");
   }
    printf("\nCollect Your card");
   return 0;
    }
   
     