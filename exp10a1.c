#include<stdio.h>
void swap(int *,int *);
int main(){
    int n1=10,n2=20;
    printf("before calling swap function");
    printf("n1=%d,n2=%d\n",n1,n2);
    swap(&n1,&n2);
    printf("after calling swap function");
    printf("n1=%d,n2=%d\n",n1,n2);
    return 0;
}
    void swap(int *x,int *y)
    {
        int temp=*x;
        *x=*y;
        *y=temp;
        printf("in swap function x=%d, y=%d\n",*x,*y);
    }
