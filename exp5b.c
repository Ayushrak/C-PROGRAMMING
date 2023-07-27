#include<stdio.h>
int main(){
    int r,s=0,n,digit=0;
    printf("\n enter a number");
    scanf("%d",&n);
    while(n>0)
    {
        r=n%10;
        s=s+r;
        n=n/10;
        digit++;
    }
    printf("\n sum of digit=%d",s);
    printf("\n no of digit =%d",digit);
    return 0;
    }
