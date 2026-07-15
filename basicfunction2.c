#include <stdio.h>
//1) main ek hi baar aata hai.
//2) start with main.
//3) unlimited functions.
// must be in order mean-{jiski calling hai vo upar rahega hamesha.}
void England(){
    printf("you are in England\n");//6
    return;//7
}
void Australia(){
    printf("you are in Australia\n ");//4
    England();//calling england//5
    return;//8
}
void India(){
    printf(" you are in India\n ");//2
    Australia();//calling australia//3
    return;//9
}
int main (){
    India();//calling india //1
    return 0;//10.
}