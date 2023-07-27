// 1 2 3      7 4 1
// 4 5 6   -> 8 5 2
// 7 8 9      9 6 3
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
        for(int j=0;j<n;j++){ // j=0 to j<i;
            printf("%d ",arr[j][i]);
        }
     printf("\n");
     }
     //rotate
     for(int i=1;i<n;i++){
        int j=0;
        int k=n-1;
        while(j<k){
            //swap arr[i][j] and arr[i][k]
            int temp = arr[i][j];
            arr[i][j] = arr[i][k];
            arr[j][k] =temp;
            j++;
            k--;
        }
     }
     printf("\n");
     //output
     for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){ // j=0 to j<i;
            printf("%d ",arr[j][i]);
        }
     printf("\n");
     }
     return 0;
     }