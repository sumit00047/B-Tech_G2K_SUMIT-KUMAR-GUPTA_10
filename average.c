#include<stdio.h>
int main()
{
    int m1,m2,m3,m4,m5;
    int sum;
    float avg;
    printf("Enter marks of 5students");
    scanf("%d %d %d %d %d ",&m1,&m2,&m3,&m4,&m5);
    sum=m1+m1+m3+m4+m5;
    avg =sum/5;
    printf("sumis%d\n",sum);
    printf("averageis%f",avg);

    return 0;
}
