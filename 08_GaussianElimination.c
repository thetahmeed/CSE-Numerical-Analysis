#include<stdio.h>
#include<conio.h>

int main()
{
    int i, j, k, n;

    float A[20][20], c, x[10], sum;

    printf("Enter the order of matrix: \n");
    scanf("%d", &n);

    printf("Enter the element of augmented matrix row-wise: \n");

    for(i=1; i<=n; i++)
    {
        for(j=1; j<=(n+1); j++)
        {
            printf("A[%d] [%d] : ", i, j);
            scanf("%f", &A[i] [j]);
        }
    }

    for(i=1; i<=n; i++)
    {
        for(j=1; j<=n; j++)
        {
            if(j>i)
            {
                c = A[j] [i] / A[i] [i];

                for(k=1; k<=n+1; k++)
                {
                    A[j][k] = A[j][k]- c * A[i][k];
                }
            }
        }
    }

    printf("The upper triangular matrix is: \n3");

    for(i=1; i<=n; i++)
    {
        for(j=1; j<=(n+1); j++)
        {
            printf("%f", A[i] [j]);
        }
        printf("\n");
    }

    for(i=1; i<=n; i++)
    {
        x[i] = 0;
    }

    printf("After applying backward substitution: \n");


    for(i=n; i>=1; i--)
    {
        sum = 0;

        for(j=1; j<=n; j++)
        {
            if(i!=j)
            sum = sum + A[i][j] * x[j];
        }

        x[i] = (A[i][n+1] - sum) / A[i] [i];
    }

    printf("The solution is: ");

    for(i=1; i<=n; i++)
    {
        printf("\nx%d=%f\t", i, x[i]);
    }

    getch();

    return 0;
}

