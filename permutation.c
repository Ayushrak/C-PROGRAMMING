#include<stdio.h>
int factorial(int x){
    int fact =1;
    for(int i=2;i<=x;i++){
        fact = fact*i;
    }
    return fact;
}
    int main(){
    int n,r;
    printf("enter n enter r :");
    scanf("%d %d",&n ,&r);
     int npr = factorial(n)/(factorial(n-r));
     printf("%d",npr);
     return 0;
}

