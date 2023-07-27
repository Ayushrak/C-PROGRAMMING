//     *
//    **
//   ***
//  ****
#include<stdio.h>
int main(){
    int n;
    printf("enter a nuumber");
    scanf("%d",&n);
    for(int i=1;i<=4;i++){
        for(int j=1;j<=n-i;j++){ //n=4;
            printf(" ");
        }
        for(int k=1;k<=i;k++){
            printf("*");
        }
        printf("\n");
    }
}