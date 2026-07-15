#include<stdio.h>
int main()
{  int x;
    printf("entre 1 for science\n");
    printf("enter 2 for maths\n");
    printf("enter 3 for both\n");
    printf("enter your subject number:-");
    scanf("%d",&x);
    if (x==1||x==2)
    {
        printf("you have gift of 15 rupees");
    }
    else if (x==3)
    {
     printf ("you have gift of 45 rupees") ; 
     }
     else
     {
        printf("enter a valid subject number and try again");
     }
     
    
    return 0;
}
