#include<stdio.h>
int main(){
    int n;
    printf("enter a nuumber");
    scanf("%d",&n);
    int nsp= n/2;
    int nst=1;
    int ml=n/2+1;
    for(int i=1;i<=n;i++){
        for(int q=1;q<=nsp;q++){ // q<=n-i;
            printf(" ");
        }
        nsp--;
        for(int j=1;j<=nst;j++){ //n=4;
            printf("*");
        }
        if(i<ml){
        nsp--;
        nst+=2;
        }
        else{
            nsp--;
            nst-=2;
        }
        
        printf("\n");
    }
    return 0;
}