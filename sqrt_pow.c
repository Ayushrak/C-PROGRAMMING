#include<stdio.h>
#include<math.h>
int main(){
    int a,b;
    printf("enter two number");
    scanf("%d %d",&a ,&b);

    int root = sqrt(a);
    int square=pow(a,b);
    printf("the square root is : %d\n",root);
    printf("the square is:%d\n",square);

    return 0;
}