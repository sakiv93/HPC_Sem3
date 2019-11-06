#include<stdio.h>
int main()
{
    int matrix_a[3][3], matrix_b[3][3], matrix_m[3][3];
    int i,j,k, sum;
/* ############################################################ */
    printf("Enter the values of matrix_a:\n");
    for (i=1;i<4;i++)
    {
        for (j=1;j<4;j++)
        {
            scanf("%d",&matrix_a[i][j]);
        }
    }
    printf("matrix_a is:\n");
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
            printf("%d\t",matrix_b[i][j]);
        }
        printf("\n");
    }
/* ############################################################ */
    for (i=1;i<4;i++)
    {
        for (j=1;j<4;j++)
        {
            for (k=1;k<4;k++)
            {
                sum = sum + (matrix_a[i][k] * matrix_b[k][j]) ;
            }
            matrix_m[i][j]=sum;
            sum=0;
        }
        

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