#include<stdio.h>
void main(){
    int i,n,flag=0;
    printf("\n enter a number");
    scanf("%d",&n);
    for(i=2;i<n;i++)
    {
        if(n%i==0){
            flag=1;
            break;
        }
    }
        if(flag==0)
                printf("number is prime");
            else
                printf("number is not prime");
}