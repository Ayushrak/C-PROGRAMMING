#include<stdio.h>
int main(){
    int arr[5]={1,2,3,4,5};
    int  x=arr[0];
    for( int i=0;i<5;i++){
        int count=0;
        if(arr[i]>x)
        count++;
        printf("%d ",count);
    }
    return 0;
}