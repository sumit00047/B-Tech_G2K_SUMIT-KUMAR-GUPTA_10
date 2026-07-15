#include<stdio.h>
int main()
{
    int n;
    printf("Enter no. of rows:");
    scanf("%d",&n);
    for (size_t i = 1; i <=n; i++)
    {
       for (size_t j = 1; j<=i; j++)// (n+1-i)for reverse
       {
        printf("%d",j);
       }
       
        printf("\n");
    }
    
    return 0;
}
