// Bisection Method

#include <stdio.h>
#include <stdlib.h>
#include <math.h>

#define f(x) ((3* x) - cos(x) -1)

int main()
{
    float a = 0, b = 0, error = 0, c, c_old;
    int i = 0;
    printf("Input Interval: ");
    scanf("%f %f", &a, &b);
    if ((f(a) * f(b)) > 0)
    {
        printf("Invalid Interval Exit!"); // to test whether search interval
        exit(1);                          // is okay or not
    }
    else if (f(a) == 0 || f(b) == 0)
    {
        printf("Root is one of interval bounds. Root is %f\n", f(a) == 0 ? a : b);
        exit(0);
    }
    printf("Ite\ta\t\tb\t\tm\t\tf(m)\t\terror\n");
    do
    {
        c_old = c;
        c = (a + b) / 2;

        printf("%2d\t%4.6f\t%4.6f\t%4.6f\t%4.6f\t", i++, a, b, c, f(c));
        if (f(c) == 0)
        {
            printf("Root is %4.6f\n", c);
        }
        else if ((f(a) * f(c)) < 0)
        {
            b = c;
        }
        else
            a = c;
        error = fabs(c - c_old);
        if (i == 1)
        {
            printf("----\n");
        }
        else
            printf("%4.6f\n", error);
    } while (error > 0.00005);
    printf("Approximate Root is %4.6f", c);
    return 0;
}

/* Output: 
Input Interval: 0 1
Ite     a               b               m               f(m)            error
 0      0.000000        1.000000        0.500000        -0.377583       ----
 1      0.500000        1.000000        0.750000        0.518311        0.250000
 2      0.500000        0.750000        0.625000        0.064037        0.125000
 3      0.500000        0.625000        0.562500        -0.158424       0.062500
 4      0.562500        0.625000        0.593750        -0.047598       0.031250
 5      0.593750        0.625000        0.609375        0.008119        0.015625
 6      0.593750        0.609375        0.601563        -0.019765       0.007813
 7      0.601563        0.609375        0.605469        -0.005829       0.003906
 8      0.605469        0.609375        0.607422        0.001143        0.001953
 9      0.605469        0.607422        0.606445        -0.002343       0.000977
10      0.606445        0.607422        0.606934        -0.000600       0.000488
11      0.606934        0.607422        0.607178        0.000272        0.000244
12      0.606934        0.607178        0.607056        -0.000164       0.000122
13      0.607056        0.607178        0.607117        0.000054        0.000061
14      0.607056        0.607117        0.607086        -0.000055       0.000031
Approximate Root is 0.607086
*/

