#include<stdio.h>
int main(){
    // for(int i=19;i<=190;i=i+19){
    //     printf("%d\n",i);
    // }
    int n;
    printf("enter a number");
    scanf("%d",&n);
    for(int i=1;i<=10;i++){
        printf("%d\n",n*i);
    }
    return 0;
}