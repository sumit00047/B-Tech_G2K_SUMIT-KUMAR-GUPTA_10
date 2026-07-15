#include <stdio.h>;
int main(){
    float r;
     printf("enter radius:");
     scanf("%f",&r);
    float pi=3.14;
    float v=4*pi*r*r*r/3;
    printf("the volume of sphere is :%f",v);
    return 0;
}