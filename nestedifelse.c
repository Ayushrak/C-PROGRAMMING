#include<stdio.h>
int main(){
    int x;
    printf("enter a number");
    scanf("%d",&x);
    if(x%5==0){  
        if(x%3==0)
        printf("divisible of 5 and 3");
    else
        printf("not divisible by 5 and 3");
    
    }
    return 0;
}