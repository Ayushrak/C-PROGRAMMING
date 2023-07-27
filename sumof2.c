#include<stdio.h>
int add(int a,int b){
    return a+b;//multiplication a*b// subtract a-b//division a/b;
}
    int main(){
    int a,b;
    printf("enter  two number");
    scanf("%d %d",&a,&b);
    int sum =add(a,b);
    printf("%d",sum);
    return 0;
}