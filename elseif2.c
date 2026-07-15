#include <stdio.h>
int main()
{
    int age;
    printf("enter your age");
    scanf("%d",&age);
    printf("you have enter %d as your age \n",age);
    if (age>=18)
    {
        printf("you can vote");

    }
    else if (age>10)
    {
        printf("you are b/w 10 and 18 and you can vote for kids");
    }
    
    else{
        printf("you can't vote");
    }
    
    return 0;
}
