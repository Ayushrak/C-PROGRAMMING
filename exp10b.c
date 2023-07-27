#include<stdio.h>
int sum(int);
int main()
{
    int n,s;
    printf("enter a num");
    scanf("%d",&n);
    s=sum(n);
    printf("sum of natural no = %d\n",s);
    return 0;
}
    int sum(int n)
    {
        if(n==1)
            return 1;
            return n + sum(n-1);
    }