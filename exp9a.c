#include<stdio.h>
#define M 10
void input(int a[][M],int,int);
void display(int a[][M],int,int);
int main(){
    int mat1[M][M],mat2[M][M],add[M][M],subt[M][M];
    int row,col,i,j;
    printf("enter the no of rows for matrices");
    scanf("%d",&row);
    printf("enter the no of col of matrices");
    scanf("%d",&col);
    printf("enter the %d no of mat1:",row*col);
    input(mat1,row,col);
    printf("enter the %d no of mat2:",row*col);
    input(mat2,row,col);
    //logic code for add matrices
    for(i=0;i<row;i++){
        for(j=0;j<col;j++)
        add[i][j]=mat1[i][j]+mat2[i][j];
    }
    //logic code of subtracction
    for(i=0;i<row;i++){
        for(j=0;j<col;j++)
        subt[i][j]=mat1[i][j]-mat2[i][j];
    }
    //displaying elements of matrices
    printf("elements of matrix 1:\n");
    display(mat1,row,col);
    printf("elements of matrix 2:\n");
    display(mat2,row,col);
    printf("addition of matrix\n");
    display(add,row,col);
    printf("sutraction of matrix\n");
    display(subt,row,col);
    return 0;
    // end of main function
}
    void input(int a[][M],int r,int c){
        int i,j;
        for(i=0;i<r;i++){
            for(j=0;j<c;j++)
            scanf("%d ",&a[i][j]);
        }
    }
        //end of input function
      void display(int a[][M],int r,int c)
    {
        int i,j;
        for(i=0;i<r;i++){
            printf("\n");
            for(j=0;j<c;j++)
            printf("%d ",a[i][j]);
        }
    }
