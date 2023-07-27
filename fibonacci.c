// 1 1 2 3 5 8 13 21 34 55;
#include<stdio.h>
int main(){
    int n;
    printf("enter a number");
    scanf("%d",&n);
    int a=0;
    int b=1;
    int sum=1;
    for(int i=1;i<=n;i++){
        if(i<=1)
        {
        sum=i;
        }
        else{
        sum = a+b;
        a=b;
        b=sum;
        }
    printf("%d\n",sum);
    } 
    return 0;
}