#include <stdio.h>
int main( )
{
 int x;
 printf("for english enter 1");
 printf("\nfor math enter 2");
 printf("\nfor both enter 3");
 printf("\nenter your subject no.:-");
 scanf("%d",&x);
 if (x ==1||x ==2)
 {
    printf("you win 15 rupees");
 }
 else if (x==3 )
 {
printf("you win 45 rupees"); 
}
 else{
    printf("enter a valid number and try again");
 }



    return 0;
}
