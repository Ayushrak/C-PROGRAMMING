#include<stdio.h>
int main(){
    int m;
    printf("enter no of rows of 1st matrix");
    scanf("%d",&m);
    int n;
    printf("enter no of rows of 1st matrix");
    scanf("%d",&n);
    int a[m][n];
    //input the first matrix
    printf("\n enter elements of 1st matrix ");
    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
            scanf("%d",&a[i][j]);
        }
    }
    //waveprint
    for(int i=0;i<m;i++){
        if(i%2==0){
            for(int j=0;j<n;j++){
                printf("%2d ",a[i][j]);
            }
        }
        else{
            for(int j=n-1;j>=0;j--){
                printf("%2d",a[i][j]);
            }
        }
        printf("\n");
    }
    return 0;
}