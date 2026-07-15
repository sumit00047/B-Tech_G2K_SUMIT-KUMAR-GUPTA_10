#include<stdio.h>
int add(int a, int b){//a,b ki jagahh kuch bhi le sakte hai.
   return a+b;
}
int main(){
    int a;
    printf("Enter 1st number:");
    scanf("%d",&a);
    int b;
    printf("Enter 2st number:");
    scanf("%d",&b);
    int sum =add(a,b);
    printf("%d",sum);
    return 0;
}

