#include<stdio.h>
void swap(int *x,int *y){
    int temp;
    temp=*x;//temp=2
    *x=*y;//a=9
    *y=temp;//b=2

    return;
}
    int main(){
        int a= 2;
        int b =9;
        swap(&a,&b);
        printf("%d %d",a,b);
        return 0;

    }