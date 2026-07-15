#include<stdio.h>//sqrt,power is libery  function.
#include<math.h>
int main (){
    int a; 
    printf("Enter a number:");
    scanf("%d",&a);

    int root= sqrt(a);
    printf("The square root is:%d",root);
    //int p=pow(7,2);
   // printf("%d",p);
    return 0;
}