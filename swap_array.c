#include<stdio.h>
void fun(int x[]){
    int temp=x[0];
    x[0]=x[1];
    x[1]=temp;
}
int main(){
    int arr[2]={2,8};
    printf("%d %d ",arr[0],arr[1]);
    printf("\n");
    fun(arr);
    printf("%d %d ",arr[0],arr[1]);
    return 0;
}
