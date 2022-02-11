#ifndef deposit
#define deposit
 int moneyDeposit(int balance){
       int amountDeposit;

       printf("Enter Amount to be DEPOSITED \n");
       printf("###############################\n");
       scanf("%d",&amountDeposit);   //taking amount for deposit
       if(amountDeposit > 0)       // amount must be greater than 0
       {
       balance = balance + amountDeposit;  // adding amount for orgingal balance
       printf("Successfully Deposited Money \n");
       printf("Your Current  Balance is %d \n",balance);
       }
       else{
           printf("Please Enter a Valid AMOUNT\n");
           
       }
       return balance;
      }
#endif