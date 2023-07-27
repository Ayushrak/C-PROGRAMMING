#include<stdio.h>
int main(){
    int n,max;
    printf("enter a number");
    scanf("%d",&n);
    int arr[n];
    printf("enter the elements of array\n");
    for(int i=0;i<n;i++){
    scanf("%d",&arr[i]);
    }
     max=arr[0];
    for(int i=0;i<n;i++){
        if(arr[i]>max){
            max=arr[i];
        }
    }
    printf("maximum element = %d",max);
    return 0;
}

