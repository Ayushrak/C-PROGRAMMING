#include<stdio.h>
int main(){
    int x;
    printf("enter a number");
    scanf("%d",&x);
    if(x%5==0){
        printf("divisible of 5");
    }
    else{
        printf("not divisible by 5");
    }
    return 0;
}