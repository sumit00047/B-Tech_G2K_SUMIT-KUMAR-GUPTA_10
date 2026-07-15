#include <stdio.h>
int main()
{
    int n;
    printf("Enter a number:");
    scanf("%d",&n);
    for (size_t i = 1; i <=n; i++)
    {
        int a=1;
        for (size_t j = 1; j<=i; j++)  //j<=n karne par pura print hoga.
        {
            printf("%d",a);
            a=a+2;
        }
        printf("\n");
    }
    
    return 0;
}


