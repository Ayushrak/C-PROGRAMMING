#include<stdio.h>
int main(){
    int a=3;
    int *x =&a;
    int **y =&x;
    int ***z = &y;
    *x=7;
    printf("%d ",a);//lu =%p
     printf("%p ",&a);
      printf("%d",*x);
      printf("%d",**y);
      printf("%d",***z);
}