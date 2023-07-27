#include<stdio.h>
int main(){
    int power=1,a,b;
    printf("enter two number");
    scanf("%d %d ",&a,&b);
    for(int i=1;i<=b;i++){
        power = power * a;
    }
    printf("%d rasied the power %d is %d",a,b,power);
    return 0;
}