#include<stdio.h>
#define MAX 100
int main(){
    int arr[MAX],n,flag=0,item,i;
    printf("enter the size of an array");
    scanf("%d",&n);
    printf("\n enter %d  elements",n);
    for(i=0;i<n;i++)
    scanf("%d",&arr[i]);
    printf("\n enter item to be search");
    scanf("%d",&item);
    for(i=0;i<n;i++){
        if(arr[i]==item){
            flag=1;
            break;
        }
    }
        if(flag==1)
        printf("\n item is present at %d location",i);
        else
        printf("\n item is not present at %d location");
        return 0;
}        