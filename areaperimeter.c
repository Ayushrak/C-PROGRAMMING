#include<stdio.h>
int main(){
    int l;
    printf("enter length:");
    int b;
    printf("enter breadth");
    scanf("%d%d",&l,&b);
    int a = l*b;
    int p = 2*(l+b);
    if(a>p){
        printf("area is greater than perimeter");
    }
    if(p>a){
        printf("perimeter is greater than area");
    }
    if(p==a){
        printf("area is equal to perimeter");
    }
    return 0;
}

