#include <stdio.h>
int main()
{
    int m, n, p, q, i, j, k, sum = 0;
    printf("Enter the number of rows and columns of the first matrix: ");
    scanf("%d%d", &m, &n);
    int a[m][n];
    printf("Enter the elements of the first matrix:\n");
    for(i = 0; i < m; i++)
    {
        for(j = 0; j < n; j++)
        {
            scanf("%d", &a[i][j]);
        }
    }
    printf("Enter the number of rows and columns of the second matrix: ");
    scanf("%d%d", &p, &q);
    int b[p][q];
    if(n != p)
    {
        printf("The matrices cannot be multiplied!\n");
        return 0;
    }
    printf("Enter the elements of the second matrix:\n");
    for(i = 0; i < p; i++)
    {
        for(j = 0; j < q; j++)
        {
            scanf("%d", &b[i][j]);
        }
    }
    int c[m][q];
    for(i = 0; i < m; i++)
    {
        for(j = 0; j < q; j++)
        {
            sum = 0;
            for(k = 0; k < p; k++)
            {
                sum += a[i][k] * b[k][j];
            }
            c[i][j] = sum;
        }
    }
    printf("Product of the matrices:\n");
    for(i = 0; i < m; i++)
    {
        for(j = 0; j < q; j++)
        {
            printf("%d ", c[i][j]);
        }
        printf("\n");
    }
    return 0;
}
