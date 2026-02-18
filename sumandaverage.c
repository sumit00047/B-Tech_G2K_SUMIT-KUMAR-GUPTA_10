#include <stdio.h>
int main()
{
    int S1;
    printf("enter 1 STUDENT marks=");
    scanf("%d",&S1);
    int S2;
    printf("enter 2STUDENT marks=");
    scanf("%d",&S2);
    int S3;
    printf("enter 3Student marks=");
    scanf("%d",&S3);
    int S4;
    printf("enter 4stdent marks=");
    scanf("%d",&S4);
    int S5;
    printf("enter 5th student marks=");
    scanf("%d",&S5);
    int sum =S1+S2+S3+S4+S5;
    printf("sum is =%d",sum);
    int average=(sum)/5 ;
    printf("\naverage of marks%d",average);
    return 0;
}
