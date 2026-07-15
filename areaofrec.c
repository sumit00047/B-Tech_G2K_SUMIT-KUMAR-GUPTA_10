#include <stdio.h>
int main()
{
    float length;
    printf("enter length:");
    scanf("%f",&length);
    float breath;
    printf("enter breath:");
    scanf("%f",&breath);
    float area  = length * breath;
    printf("area of rec:%f",area);


   
    return 0;
}
