#ifndef pinc
#define pinc
int pinChange(int pin2)
{
    int pin ; // to store new pin
    printf("Enter new PIN \n");
    scanf("%d",&pin);
     if(pin2 > 999 && pin2 <=9999){ // pin must be only four digit number
         pin2== pin ;
      printf("Your new PIN is %d  ",pin2);
     }

    else{
        printf("Please Enter a valid Pin");
    }

}
#endif