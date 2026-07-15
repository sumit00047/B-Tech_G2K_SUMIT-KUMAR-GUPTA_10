 #include<stdio.h>
int main()
{
 int arr[7]={1,9,4,19,4,35,22};
 int max=-1;
 for(int i=0;i<=6;i++){
    if(max<arr[i]){
        max=arr[i];
    }
 }
 printf("%d",max);
    return 0;
}
