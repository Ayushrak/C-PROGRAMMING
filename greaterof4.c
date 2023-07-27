#include<stdio.h>
int main(){
    int a,b,c,d;
    scanf("%d%d%d%d",&a,&b,&c,&d);
    if(a>b&&a>c&&a>d)
    printf("a is greatest");
     if(b>c&&b>c&&b>d)
    printf("b is greatest");
     if(c>b&&c>a&&c>d)
    printf("c is greatest");
     if(d>b&&d>a&&d>c)
    printf("d is greatest");
    return 0;
}




    
