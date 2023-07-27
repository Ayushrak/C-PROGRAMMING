#include<stdio.h>
void palindrome(int arr[]){
    for(int i=0;i<6;i++){
        for(int j=6;j>0;j++){
            if(arr[i]==arr[j])
            {
                printf("palindrome number");
            }
            else{
            break;
        }
    }
}
}
    int main(){
         int arr[6] = {1,2,3,3,2,1};
        palindrome(arr);
        
        for(int i=0;i<6;i++){
        printf("%d ",arr[i]);
    }
    return 0;
    }
