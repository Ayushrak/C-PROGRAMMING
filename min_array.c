#include<stdio.h>
int main(){
    int arr[7]={12,45,23,67,56,67,9};
    int min=arr[0];
    for(int i=0;i<7;i++){
        if(arr[i]<min){
            min=arr[i];
        }
    }
          printf("%d",min);
        return 0;
}