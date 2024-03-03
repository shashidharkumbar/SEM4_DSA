#include<stdio.h>

double add(double a, double b)
{
    return a+b;
}

double sub(double a, double b)
{
    return a-b;
}

double mul(double a, double b)
{
    return a*b;
}

double div(double a, double b)
{
    return a/b;
}

int main()
{
    double(*p[10])(double, double)={add, sub, mul, div};

    double a, b, c, x;
    int ch;

    while(1)
    {

    printf("Enter the numbers: \n");
    scanf("%lf%lf",&a, &b);

    printf("Enter the choice: \n");
    printf("1. add\n");
    printf("2. sub\n");
    printf("3. mul\n");
    printf("4. div\n");

    scanf("%d",&ch);

    c=(*p[ch-1])(a, b);
    printf("Ans: %lf\n", c);
    }
}
