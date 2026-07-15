#include <stdio.h>
int main()
{
int n;
printf("enter number of row=");
scanf("%d",&n);
for (size_t i =1; i <=n; i++)//no of line/rows ->i
{
    for (size_t j = 1; j <=n; j++)//no of columns ->j
    {
        printf("%d ",j);
    }
    printf("\n");// har line ke baad enter ke lia+
}

    return 0;
}
