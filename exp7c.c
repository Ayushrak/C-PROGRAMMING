
// A
// BB
// CCC
// DDDD
// EEEEE
#include<stdio.h>
int main(){
    int i,n,j;
    printf("\n enter number of rows");
    scanf("%d",&n);
    char ch ='A';
    for(i=1;i<=n;i++){
        for(j=1;j<=i;j++){
            printf("%c",ch);
        }
        ch=ch+1;
        printf("\n");
    }
        return 0;
}