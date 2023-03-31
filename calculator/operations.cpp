#include "operations.h"
double plus(double a, double b)
{
    return a + b;
}
double minus(double a, double b)
{
    return a - b;
}
double mult(double a, double b)
{
    return a * b;
}
double div(double a, double b)
{
    return a / b;
}
double volume(double a, double b, double c)
{
    return (a * b * c);
}
double power(double a, double b)
{
    int o = a;
    for(int c = 0; c < b - 1; c++)
        a = a * o;
    return a;
}
double medium(double a[], double b)
{
    double all = 0;
    for(int c = 0; c < b; c++)
        all = all + a[c];
    return all / b;
}