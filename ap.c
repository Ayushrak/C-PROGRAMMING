#include<stdio.h>
int main(){
    int n;
    printf("enter a number");
    scanf("%d",&n);
    for(int i=1;i<=n;i=i+2){
        printf("%d\n",i);
    } 
    // for(i=1;i<=2n-1;i=i+2)
    return 0;
}