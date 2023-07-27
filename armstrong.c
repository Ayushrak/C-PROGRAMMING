#include<stdio.h>
int main(){
    int n,s=0,r;
    printf("enter a number\n");
    scanf("%d",&n);
    int temp=n;
    while(n>0){
    r=n%10;
    s=s+r*r*r;
    n=n/10;
    }
    if(temp==s){
        printf("no is armstrong",n);
    }
    else
        printf("no is not armstrong");
        return 0;
}