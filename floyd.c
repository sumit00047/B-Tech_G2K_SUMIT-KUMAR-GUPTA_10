#include <stdio.h>
int main()
{
    int n;
    printf("enter number of line::");
    scanf("%d",&n);
    int a=1;
    for (size_t i = 1; i <=n; i++)
    {
       for (size_t j = 0;  j<=i; j++)
       {
        printf("%d",a);
        a++;
       }
       printf("\n");
    }
    
    return 0;
}
