#include <stdio.h>
int main()
{
    int m;
    printf("enter no of rows of 1st matrix");
    scanf("%d", &m);
    int n;
    printf("enter no of rows of 1st matrix");
    scanf("%d", &n);
    int a[m][n];
    // input the first matrix
    printf("\nenter elements of 1st matrix");
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            scanf("%d", &a[i][j]);
        }
    }
    // 2nd  matrix order
    int p;
    printf("enter no of rows of 2nd matrix");
    int q;
    printf("enter no of rows of 2nd matrix");
    int b[p][q];
    // input the second matrix
    printf("\nenter elements of 2nd matrix ");
    for (int i = 0; i < p; i++)
    {
        for (int j = 0; j < q; j++)
        {
            scanf("%d", &b[i][j]);
        }
    }
    // check
    if (n != p)
    {
        printf("the matrices cannot be multiplied");
    }
    else
    {
        // multiplication
        int res[m][n];
        for (int i = 0; i < m; i++)
        {
            for (int j = 0; j < q; j++)
            {
                res[i][j] = 0;
                for (int k = 0; k < n; k++)
                {
                    res[i][j] += a[i][k] * b[k][j];
                }
            }
        }
        for (int i = 0; i < m; i++)
        {
            for (int j = 0; j < q; j++)
            {
                printf("%d", res[i][j]);
            }
        }
    }
    return 0;
}