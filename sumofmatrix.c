#include<stdio.h>
int main()
{
    int r;
    printf("enter the number of rows");
    scanf("%d",&r);
    int c;
    printf("enter no of columns");
    scanf("%d",&c);
    printf("enter all the elements\n");
    int arr[r][c];
    for(int i=0;i<r;i++){
        for(int j=0;j<c;j++){
            scanf("%d",&arr[i][j]);
        }
    }
     for(int i=0;i<r;i++){
           for(int j=0;j<c;j++){
            printf("%d",arr[i][j]);
}
     }
    int sum = 0;
    for(int i=0;i<r;i++){
        for(int j=0;j<c;j++){
            sum+=arr[i][j];
            printf("the sum of given matrix is %d",sum);
        }
     printf("\n");
     }
     return 0;
     }