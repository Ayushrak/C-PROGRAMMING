#include<stdio.h>
int main(){
    int n;
    printf("enter a nuumber");
    scanf("%d",&n);
    int nsp= n-1;
    for(int i=1;i<=n;i++){
        for(int q=1;q<=nsp;q++){ // q<=n-i;
            printf(" ");
        }
        nsp--;
        for(int j=1;j<=i;j++){ //n=4;
            printf("%d",j);
        }
        for(int k=1;k<=i-1;k++){
            int a =i-1;
            printf("%d",a);
            a--;
        }
        printf("\n");
    }
}