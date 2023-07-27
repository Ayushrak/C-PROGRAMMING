#include<stdio.h>
int main(){
    int n,r,s=0,temp;
    printf("\n enter a number");
    scanf("%d",&n);
    temp=n;
    while(n>0);
    {
        r=n%10;
        s=s*10+r;
        n=n/10;
    }
    if (temp ==s)
        printf("\n number is palindrome");
        else 
        printf("\n number is not palindroome");
        return 0;
}