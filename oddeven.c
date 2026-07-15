#include<stdio.h>//take positive int input and tell if it is even or odd.
int main(){
    int x;
    printf("enter a number");
    scanf("%d",&x);
    if(x%2==0){    //% modlus mean factor /= ,mean equal to. 
        printf("even number");
     }
     if(x%2!=0){   //! mean that not equalto
        printf("odd number");
     }
     

     return 0;
    
}