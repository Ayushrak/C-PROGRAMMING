#include<stdio.h>
int main(){
    int arr[5]= {1,2,3,4,5};
    int prd = arr[0];
    for(int i=0;i<5;i++){
        prd = prd*arr[i];
    }
    printf("%d ",prd);
    return 0;
}