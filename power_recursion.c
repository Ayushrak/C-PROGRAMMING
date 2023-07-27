#include<stdio.h>
int power(int a,int b){
    if(b==0) return 1;
    int recANS = a*power(a,b-1);
    return recANS;
    }
int main(){
    int a;
    printf("enter a number");
    scanf("%d",&a);
    int b;
    printf("enter a power");
    scanf("%d",&b);
    int p= power(a,b);
    printf("%d raised to the power %d is %d ",a,b,p);
    return 0;
}