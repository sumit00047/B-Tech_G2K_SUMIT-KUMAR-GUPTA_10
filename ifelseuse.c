#include<stdio.h>//take positive int input and tell if it is even or odd.
int main(){
    int x;
    printf("enter a number");
    scanf("%d",&x);
    if(x%2==0){    
        printf("even number");
     }
     else{
        printf("odd number");//else likh ne ke lia direct else ke baad curly bracket lagaoo.
     }
     

     return 0;
    
}