#include <stdio.h>
#include <conio.h>
#include <math.h>
#include <stdlib.h>

#define f(x) 3 * x - cos(x) + 1
#define g(x) (cos(x) + 1) / 3

int main()
{
    int step = 1, N;
    float x0, x1, e;

    printf("Enter initial guess: ");
    scanf("%f", &x0);
    printf("Enter tolerable error: ");
    scanf("%f", &e);
    printf("Enter maximum iteration: ");
    scanf("%d", &N);

    printf("\nStep\tx0\t\tf(x0)\t\tx1\t\tf(x1)\n");

    do
    {
        x1 = g(x0);
        printf("%d\t%f\t%f\t%f\t%f\n", step, x0, f(x0), x1, f(x1));

        step = step + 1;

        if (step > N)
        {
            printf("Not Convergent.");
            exit(1);
        }

        x0 = x1;

    } while (fabs(f(x1)) > e);

    printf("\nRoot is %f", x1);

    getch();
    return (0);
}

/* Output: 
Enter initial guess: 3.2
Enter tolerable error: 0.001
Enter maximum iteration: 10

Step    x0              f(x0)           x1              f(x1)   
1       3.200000        11.598295       0.000568        0.001705
2       0.000568        0.001705        0.666667        2.214113
3       0.666667        2.214113        0.595296        1.957905
4       0.595296        1.957905        0.609328        2.007950
5       0.609328        2.007950        0.606678        1.998486
6       0.606678        1.998486        0.607182        2.000288
7       0.607182        2.000288        0.607086        1.999945
8       0.607086        1.999945        0.607105        2.000010
9       0.607105        2.000010        0.607101        1.999998
10      0.607101        1.999998        0.607102        2.000000
Not Convergent.
*/