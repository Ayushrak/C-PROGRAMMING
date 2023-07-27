#include<stdio.h>
 int main(){
    int a[3][2] = {{1,2},{3,4},{5,6}};
    int b[2][4] = {{1,2,3,4},{5,6,7,8}};
    int res[3][4];
    int rc = 2;
    //multiplying
    for(int i=0;i<3;i++){
        for(int j=0;j<4;j++){
            //i row of a[][] and j column of b[][]
             res[i][j] = 0;
             for(int k=0;k<rc;k++){
                res[i][j] += a[i][k]*b[k][j];
             }  
        }
    }
    for(int i=0;i<3;i++){
        for(int j=0;j<4;j++){
            printf("%d ",res[i][j]);
        }
        printf("\n");
    }
    return 0;
}