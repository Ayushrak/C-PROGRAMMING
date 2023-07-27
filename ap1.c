#include<stdio.h>
int main(){
    int n;
    printf("enter a number");
    scanf("%d",&n);
    int a=4;
    for(int i=1;i<=n;i++){//for n terms for(int i=1;a>0;i++)
        printf("%d\n",a);
        a=a+3;
    }
    // for(int i=4;i<=3*n+1;i=i+3){
    //     printf("%d\n",i);
    // }
    return 0;
}