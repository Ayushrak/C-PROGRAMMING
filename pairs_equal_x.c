#include<stdio.h>
int main(){
    int arr[6]={1,2,3,4,5,6};
    int totalpairs = 0;
    int x = 7;
    for(int i=0;i<6;i++){
        for(int j=i+1;j<6;j++){
            if(arr[i]+arr[j] == x){
            totalpairs++;
            printf("(%d,%d) ",arr[i],arr[j]);
            }
        }
    }
        printf("%d",totalpairs);
        return 0;
}