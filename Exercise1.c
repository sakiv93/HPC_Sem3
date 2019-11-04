#include<stdio.h>
int main()
{
    int matrix_a[3][3], matrix_b[3][3], matrix_m[3][3];
    int i,j, sum;
/* ############################################################ */
    printf("Enter the values of matrix_a:\n");
    for (i=1;i<4;i++)
    {
        for (j=1;j<4;j++)
        {
            scanf("%d",&matrix_a[i][j]);
        }
    }
    printf("matrix_b is:\n");
    for (i=1;i<4;i++)
    {
        for (j=1;j<4;j++)
        {
            printf("%d\t",matrix_a[i][j]);
        }
        printf("\n");
    }
/* ############################################################ */
    printf("Enter the values of matrix_b:\n");
    for (i=1;i<4;i++)
    {
        for (j=1;j<4;j++)
        {
            scanf("%d",&matrix_b[i][j]);
        }
    }
    printf("matrix_b is:\n");
    for (i=1;i<4;i++)
    {
        for (j=1;j<4;j++)
        {
            printf("%d\t",matrix_a[i][j]);
        }
        printf("\n");
    }
/* ############################################################ */
    for (i=1;i<4;i++)
    {
        sum=0;
        for (j=1;j<4;j++)
        {
            sum = sum + (matrix_a[i][j] * matrix_b[j][i]) ;
        }
        matrix_m[i][j]=sum;

    }
    printf("matrix_m is:\n");
    for (i=1;i<4;i++)
    {
        for (j=1;j<4;j++)
        {
            printf("%d\t",matrix_m[i][j]);
        }
        printf("\n");
    }
    return 0;

}