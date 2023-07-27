#include<stdio.h>
int main(){
    int x;
    printf("enter a number");
    scanf("%d",&x);
    if(x>0)
        printf("possitive number");
     if(x<0)
        printf("negative number");
    if(x=0)
        printf("zero");
    return 0;
}