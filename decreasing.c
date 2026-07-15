#include <stdio.h>
void greeting(int n){
    for(int i=1;i<=n;i++){
        printf("good morning\n");
    }
    return;
}
int main(){
    int n;
    printf("enter a number");
    scanf("%d",&n);
    greeting(n);
    return 0;
}