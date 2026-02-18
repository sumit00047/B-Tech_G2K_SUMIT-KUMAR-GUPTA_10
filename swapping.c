#include <stdio.h>
int main(){
   int a,b, c;
   printf("enter first value");
   scanf("%d",&a);
    printf("enter second value");
   scanf("%d",&b);
   
   c=a;
   a=b;
   b=c;
   printf("a=%d,b=%d\n",a,b);
    return 0;
}