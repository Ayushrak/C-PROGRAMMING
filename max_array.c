#include<stdio.h>
int main(){
    int arr[7]={12,45,23,67,56,67,98};
    int max=arr[0];
    for(int i=0;i<7;i++){
        if(max<arr[i]){
            max=arr[i];
        }
    }
          printf("%d",max);
        return 0;
}
#include<limits.h>
int main(){
    int max = INT_MIN;
    printf("%d",max);
    return 0;
}