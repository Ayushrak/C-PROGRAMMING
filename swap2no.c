#include<stdio.h>
int main(){
    int a;
    printf("enter a");
    scanf("%d",&a);
       int b;
    printf("enter b");
    scanf("%d",&b);
    int temp;
    temp =a;
    a=b;
    b=temp;
    printf("the value of ais %d",a);
    printf("the value of bis %d",b);
    return 0;
}