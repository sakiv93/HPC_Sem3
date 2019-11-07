#include<stdio.h>
int main()
{
    float matrix_a[20][20], matrix_b[20][20], matrix_m[20][20];
    int i,j,k, sum,a,b,c,d;
    printf("Enter the number of rows of matrix_a:\n");
    scanf("%d",&a);
    printf("Enter the number of coloums of matrix_a:\n");
    scanf("%d",&b);
/* ############################################################ */
/* To take input from user for matrix a */
    printf("Enter the values of matrix_a:\n");
    for (i=1;i<(a+1);i++)
    {
        for (j=1;j<(b+1);j++)
        {
            printf("Enter the values of matrix_a[%d][%d]:",i,j);
            scanf("%f",&matrix_a[i][j]);
        }
    }
    printf("matrix_a is:\n");
    for (i=1;i<(a+1);i++)
    {
        for (j=1;j<(b+1);j++)
        {
            printf("%f\t",matrix_a[i][j]);
        }
        printf("\n");
    }
/* ############################################################ */
/* A if else loop is created in order to handle input error from user, where
   user might give matrices which cannot be multiplied */
    printf("Enter the number of rows of matrix_b:\n");
    scanf("%d",&c);
    if (b!=c)
    {
        printf("The rows of matrix_b should be equal to coloumns of matrix_a\n");
    }
    else
    {
        /* To take input from user for matrix b */
        printf("Enter the number of coloums of matrix_b:\n");
        scanf("%d",&d);
        printf("Enter the values of matrix_b:\n");
        for (i=1;i<(c+1);i++)
        {
            for (j=1;j<(d+1);j++)
            {
                printf("Enter the values of matrix_a[%d][%d]:",i,j);
                scanf("%f",&matrix_b[i][j]);
            }
        }
        printf("matrix_b is:\n");
        for (i=1;i<(c+1);i++)
        {
            for (j=1;j<(d+1);j++)
            {
                printf("%f\t",matrix_b[i][j]);
            }
            printf("\n");
        }
    /* ############################################################ */
    /* 3 for loops are used for matrix multipliction */
        for (i=1;i<(a+1);i++)
        {
            for (j=1;j<(d+1);j++)
            {
                for (k=1;k<(d+1);k++)
                {
                    sum = sum + (matrix_a[i][k] * matrix_b[k][j]) ;
                }
                matrix_m[i][j]=sum;
                sum=0;
            }
            

        }
        /* to display final matrix after matrix multiplication  */
        printf("matrix_m is:\n");
        for (i=1;i<(a+1);i++)
        {
            for (j=1;j<(d+1);j++)
            {
                printf("%f\t",matrix_m[i][j]);
            }
            printf("\n");
        }
    }

    return 0;

}