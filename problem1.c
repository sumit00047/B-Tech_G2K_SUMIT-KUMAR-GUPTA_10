#include <stdio.h>
int main (){
    int i=2, j=3, k, l;//ese alag-alag line me bhi likh sakte hai.
    
    float a,b;
    k=i/j*j;
    l=j/i*i;
    a=i/j*j;

    b=j/i*i;
    printf("%d %d %f %f" ,k ,l,a,b);
    return 0;
}