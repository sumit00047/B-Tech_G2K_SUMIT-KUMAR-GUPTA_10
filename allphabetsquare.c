#include <stdio.h>

int main()  //ABCD
{           //ABCD
    int n;
    printf("Enter a number:");
    scanf("%d",&n);
    for (size_t i = 1; i <=n; i++)
    {
        int a=1;
        for (size_t j = 1; j<=n; j++)   // n ki place pe i rahe ga toh triangle alphabet.
        {                              
           int d=a+64; //d=65
           char ch =(char)d; //ch=(char)65 -> ch ='A'
            printf("%c",ch);
            a++;
        }
        printf("\n");
    }
    
    return 0;
}





