#include<stdio.h>//take positive int input and tell if it is divisible by 5 or not.
int main(){
    int x;
    printf("enter a number =");
    scanf("%d",&x);
    if(x%5==0){    //% modlus mean factor /= ,mean equal to. 
        printf("divisible by 5");
     }
     if(x%5!=0){   //! mean that not equalto
        printf("not divisible by 5");
     }
     

     return 0;
    
}