#include <stdio.h>
#include <conio.h>
int main()
{
    float x[20], y[20][20];
    int i, j, n;
    printf("Enter number of Data:\n");
    scanf("%d", &n);
    printf("Enter Data:\n");
    for (i = 0; i < n; i++)
    {
        printf("x[%d]=", i);
        scanf("%f", &x[i]);
        printf("y[%d]=", i);
        scanf("%f", &y[i][0]);
    }

    for (i = 1; i < n; i++)
    {
        for (j = 0; j < n - 1; j++)
        {
            y[j][i] = y[j + 1][i - 1] - y[j][i - 1];
        }
    }
    printf("\n Forward Difference Table \n\n");
    for (i = 0; i < n; i++)
    {
        printf("\t %0.2f", x[i]);
        for (j = 0; j < n - i; j++)
        {
            printf("\t %0.2f", y[i][j]);
        }
        printf("\n");
    }
    getch();
    return 0;
}

/* Output: 
Enter number of Data:
5
Enter Data:
x[0]=30    
y[0]=0.5
x[1]=35
y[1]=0.57
x[2]=40
y[2]=0.64
x[3]=45
y[3]=0.70
x[4]=50
y[4]=0.76

 Forward Difference Table

         30.00   0.50    0.07    0.00    -0.01   0.02
         35.00   0.57    0.07    -0.01   0.01
         40.00   0.64    0.06    0.00
         45.00   0.70    0.06
         50.00   0.76
*/