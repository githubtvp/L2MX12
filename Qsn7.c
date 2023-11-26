// 7. Consider the following C function
#include <stdio.h>
int f(int n)
{
    static int i = 1;
    if (n >= 5)
        return n;
    n = n + i;
    i++;
    return f(n);
}
// if n = 0 return 6, n =1 ret 7