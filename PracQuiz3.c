#include <stdlib.h>
#include <time.h>
#include <stdio.h>

// int fun()
// {
//     static int cnt = 0;
//     static int num = 16;
//     cnt++;    
//     printf("\ncnt : %d,  Num : %d\n", cnt, num); 
//     return num--;
// }
// int main()
// {
//     for ( fun();  fun(); fun())
//         printf("%d ", fun());
//     return 0;
// }

/*
# define max(x,y) (x>y) ? x : y
int f(int *p, int n)
{
    if (n <= 1)
        return 0;
    else
        return max(f(p + 1, n - 1), p[0] - p[1]);
}
int main()
{
    int a[] = {3, 5, 2, 6, 4};
    printf("%d", f(a, 5));//3
}
*/
/*
void f(int, short);
void main()
{
    int i = 100;
    short s = 12;
    short *p = &s;
    f(i, *p); // call to f()
             // __________; // call to f()
}
*/
/*
int f(int n, int k)
{
    if (n == 0)
        return 0;
    else if (n % 2)
        return f(n / 2, 2 * k) + k;
    else
        return f(n / 2, 2 * k) - k;
}

int main()
{
    printf("%d", f(20, 1));//9
    return 0;
}
*/


int funcf(int x);
int funcg(int y);
int main()
{
    int x = 0, y = 1, count;
    for (count = 1; count <= 5; ++count)
    {
        y += funcf(x++) + funcg(x++);
        printf("%d ", y++);
    }
}

int funcf(int x)
{
    static int y;
    y = funcg(x++);
    return (y++);
}

int funcg(int x)
{
    static int y = 1;
    y += 1;
    return (y++ + x++);
}

/*
main()
{//no output as such but process returns value 2 + 10
    int x = 2, y = 10;
    if (x < y)
        return (x = x + y);
    else
        printf("z1");
    printf("z2");
}
*/
/*
int foo(int a)
{
    printf("%d", a);
    return 0;
}
int main()
{
    foo;
    return 0;
}
*/