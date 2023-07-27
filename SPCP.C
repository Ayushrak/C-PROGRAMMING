#include<stdio.h>
int main(){
    int cp,sp;
    printf("enter selling price ");
    printf("enter cost price");
    scanf("%d%d",&cp,&sp);
    if(sp>cp)
    printf("profit");
     else if(cp>sp)
    printf("loss");
    if(cp==sp)
    printf("neither loss neither profit");
    return 0;
}