    #include<stdio.h>
    int main(){
        int a;
        printf("Enter a :");
        scanf("%d",&a);
           int b;
        printf("Enter b :");
        scanf("%d",&b); 
        int third;
        third=a;
        a=b;
        b=third;
        printf("the value of a is %d\n",a);
        printf("the value of b is %d\n",b);
        return 0;
    }