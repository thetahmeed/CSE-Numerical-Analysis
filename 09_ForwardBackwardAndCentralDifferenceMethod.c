#include<stdio.h>
#include <math.h>

void fordwardDiff();
void backwardDiff();
void centraldDiff();
void options();

double f(double x)
{
    return sin(x);
}
int main()
{
    int c;
    options();
    scanf("%d", &c);
    switch (c)
    {
    case 1:
        fordwardDiff();
        break;
    case 2:
        centraldDiff();
        break;
    case 3:
        backwardDiff();
        break;
    default:
        return 0;
    }
    return 0;
}
void options()
{
    printf("Enter Choice \n");
    printf("\t Enter 1 (forward Diff)\n ");
    printf("\t Enter 2 (central Diff)\n ");
    printf("\t Enter 3 (backward Diff)\n ");
    printf(" Enter Choice ");
}
void fordwardDiff()
{
    double a, h;
    printf("Enter a and h separator by space \n");
    scanf("%lf %lf", &a, &h);
    double res = (f(a + h) - f(a)) / (2 * h);
    printf("f(a)=%lf", res);
}
void centraldDiff()
{
    double a, h;
    printf("Enter a and h separator by space \n");
    scanf("%lf %lf", &a, &h);
    double res = (f(a + h) - f(a - h)) / (2 * h);
    printf("f(a)=%lf", res);
}
void backwardDiff()
{
    double a, h;
    printf("Enter a and h separator by space \n");
    scanf("%lf %lf", &a, &h);
    double res = (f(a + h) - f(a)) / (2 * h);
    printf("f(a)=%lf", res);
}

// © https://github.com/thetahmeed

/* Output : 
Enter Choice 
         Enter 1 (forward Diff) 
         Enter 2 (central Diff) 
         Enter 3 (backward Diff)
  Enter Choice 1
Enter a and h separator by space 
3 0.1
f(a)=-0.497697
*/