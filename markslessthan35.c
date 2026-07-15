#include<stdio.h>
int main(){
    int marks[10]={95,90,33,21,100,50,65,89,97,30};
    for(int i=0;i<10;i++){
        if(marks[i]<35){
        printf("%d ",marks[i] );//for print oonly index remove marks
    }
}
    return 0;
}
