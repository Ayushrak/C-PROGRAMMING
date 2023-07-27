#include<stdio.h>
int main(){
    int arr[7]={1,23,1,4,3,5,0};
    for(int i=0;i<=6;i++){
        for(int j=i+1;j<=6;j++){
            if(arr[i]=arr[j]){
                printf("%d is duplicate emement ",arr[i]);
                break;
            }
        }
    }
    return 0;
}