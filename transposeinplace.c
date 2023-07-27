#include<stdio.h>
int main()
{
    int n;
    printf("enter the number of rows");
    scanf("%d",&n);    
    int arr[n][n];
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            scanf("%d",&arr[i][j]);
        }
        printf("\n");
    }
     for(int i=0;i<n;i++){
           for(int j=0;j<i;j++){
            int temp = arr[i][j];
            arr[i][j]=arr[j][i];
            arr[j][i]=temp;
}
     }
     for(int i=0;i<n;i++){
        for(int j=0;j<i;j++){ // j=0 to j<i;
            printf("%d ",arr[j][i]);
        }
     printf("\n");
     }
     return 0;
     }