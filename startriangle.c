#include<stdio.h>
int main (){
    int n;
    printf("Enter no of row :");;
    scanf("%d",&n);
    for (size_t i = 1; i <=n; i++)
    {
        for (size_t j = 1; j <=i; j++)
        {
           printf("*");
        }
        printf("\n");
    }
    
    return 0;
}