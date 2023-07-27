#include<stdio.h>
int main(){
    int a,b,c,choice;
    printf("\n  enter two numbers");
    scanf("%d %d",&a ,&b);
    printf("\n 1 addition");
    printf("\n 2 subtraction");
    printf("\n 3 multiplication");
    printf("\n 4 division");
    printf("\n enter a choice(1-4)");
    scanf("%d",&choice);
switch(choice)
{
    case 1 : c= a+b;
    printf("sum =%d",c);
    break;
    case 2 : c=a-b;
    printf("difference = %d",c);
    break;
    case 3 : c=a*b;
    printf("multiplication=%d",c);
    break;
    case 4 : c=a/b;
    printf("division =%d",c);
    break;
    default : printf("wrong choice");
}
    return 0;
}