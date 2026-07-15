#include <stdio.h>
int main()
{
int n;
printf("enter number of Line=");
scanf("%d",&n);
for (size_t i =1; i <=n; i++)//outer loop -> no of lines
{
    for (size_t i = 1; i <=n; i++)//inner loop -> no of stars in each row.
    {
        printf("*");
    }
    printf("\n");// har line ke baad enter ke lia+
}

    return 0;
}
