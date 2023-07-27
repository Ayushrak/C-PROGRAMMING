#include<stdio.h>
int main()
{
    int l,b,area,peri;
    printf("enter length");
    scanf("%d",&l);
    printf("enter breadth");
    scanf("%d",&b);
    area=l*b;
    printf("\n area of rectangle=%d",area);
    peri=2*(l+b);
    printf("\n perimeter of rectangle=%d",peri);
    return 0;
}

