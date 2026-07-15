#include<stdio.h>//star triangle ulta banana hai.
int main (){
    int n;
    printf("Enter no of row :");;
    scanf("%d",&n);
    for (size_t i = 1; i <=n; i++)
    {
        for (size_t j = 1; j <=n+1-i; j++)// (if i=1,j must be =4)
        {
           printf("*");
        }
        printf("\n");
    }
    
    return 0;
}