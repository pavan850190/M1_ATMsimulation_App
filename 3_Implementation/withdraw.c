#ifndef withdraw
#define withdraw
 int moneyWithdraw(int balance){
       int amountWithdraw;
       printf("Enter Amount to be WITHDRAW \n");
       printf("###############################\n");
       scanf("%d",&amountWithdraw); //taking amount for withdraw
       if(amountWithdraw % 100 != 0)    // the withdraw amunt must be multiple of 100 that atm 
       {                                    // can not provide coins or change.
       printf("Enter the Amount in multiple of 100\n");
      
       }
       else{
           if(amountWithdraw > balance)  // amount must be less then balce if not it provide thise out put
           {
               printf("INSUFFICENT BALANCE \n");
              
           }
           else
           {
               balance = balance - amountWithdraw; // subtracting balance from orginal balance1
               printf("Please Collect the CASH \n");
               printf("#########################################\n");
               printf("Your Current Balance is %d \n",balance);
           }
       }
       return balance;
       }
#endif