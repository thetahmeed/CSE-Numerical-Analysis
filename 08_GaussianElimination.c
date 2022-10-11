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


/* Output: 
Enter the order of matrix:
3
Enter the element of augmented matrix row-wise:
A[1] [1] : 1
A[1] [2] : 1
A[1] [3] : 2
A[1] [4] : 8
A[2] [1] : -1
A[2] [2] : -2
A[2] [3] : 3
A[2] [4] : 1
A[3] [1] : 3
A[3] [2] : -7
A[3] [3] : 4
A[3] [4] : 10
The upper triangular matrix is:
1.0000001.0000002.0000008.000000
0.000000-1.0000005.0000009.000000
0.0000000.000000-52.000000-104.000000
After applying backward substitution:
The solution is:
x1=3.000000
x2=1.000000
x3=2.000000
*/