#include<stdio.h>
int main(){
    int  n;
    scanf("%d",&n);
    if(n>80)
    printf("A grade");
   else if(n>70)
    printf("B grade");
   else if(n>60)
    printf("C grade");
    else if(n>50)
    printf("D grade");
    else
    printf("fail");
    return 0;
}

