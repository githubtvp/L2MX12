// 1. Write the output for the successful execution.
#include<stdio.h>

struct abc
{
    int a;
    int *b;
    int c[5];
};
void foo(struct abc x, struct abc y[])
{
    x.a = 25;
    *(x.b) = 50;
    x.c[0] = 30;
    y[0] = x;
}
int main()
{
    struct abc x, y[5];
    int n = 20;
    x.a = 5;
    x.b = &n;
    x.c[0] = 10;
    y[0] = x;
    foo(x, y);
    printf("x : % d, % d \n ", x.a, x.c[0]);//5, 10
    printf("y[0] : % d, % d \n ", y[0].a, y[0].c[0]);//25, 30
    printf("n = % d\n", n);//50
}