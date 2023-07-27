#include<stdio.h>
int main(){
    int x,y;
    printf("enter the coordinates");
    scanf("%d%d",&x,&y);
    if(y==0&&x==0)
    printf("origin");
    else if(x=0)
    printf("lies on y axis");
    else if(y=0)
    printf("x axis");
    else
    printf("b/w x and y axis");
    return 0;
}