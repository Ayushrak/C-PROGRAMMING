#include<stdio.h>
int main(){
    int x;
    printf("enter a number");
    scanf("%d",&x);
    if(x>99&&x<1000){
        printf("three digit no");
    }
    else{
        printf("not three digit no");
    }
    return 0;
}