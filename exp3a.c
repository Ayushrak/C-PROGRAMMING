#include<stdio.h>
int main()
{
    int a, b,c;
    printf("enter the value of a and b");
    scanf("%d %d",&a ,&b);
    printf("\n values before swapping a=%2d,b=%2d",a,b);
    c=a;
    a=b;
    b=c;
    printf("\n values after swapping a=%2d,b=%2d",a,b);
    return 0;
}