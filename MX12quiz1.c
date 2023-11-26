#include <stdio.h>
#include <stdlib.h>
#include <conio.h>

/*#define main main()
int main
{
       clrscr();
       printf("Hello IT City");
}
*/
/*int compute(int n)
{
    if (n < 1)
        return (1);
    return (n * compute(n - 2));
}
void main()
{
    printf("val1=%d val2=%d val3=%d\n", compute(5), compute(4), compute(-5));
}*/
/*void main()
{
    int i;
    for (i = 0; i < 20; i++)
    {
        switch (i)
        {
        case 0:
            i += 5;
        case 1:
            i += 2;
        case 5:
            i += 5;
        default:
            i += 4;
        }
        printf("%d", i); // 16-21
    }
}
*/
/*void main()
{
    int i, j, x = 0;
    for (i = 0; i < 100; i++)
        for (j = i; j < 100; j++)
            x++;
    printf("%d", x);//5050
}*/
/*int main()
{
    int x = 0, n;
   // clrscr();
    scanf("%d", &n);
    if (n > 8)
    {
        if (n < 9)
            x = 1;
    }
    else
    {
        if (n > 4)
            if (n < 6)
                x = 2;
            else
                x = 3;
        else if (n > 2)
            x = 4;
        else
            x = 5;
    }
    printf("%d", x);
}
*/
/*void main()
{
    int i, j, k;
    //clrscr();
    for (i = 1; i < 10; i++)
    {
        printf("%d:", i);
        for (j = 1; j < 10; j++)
        {
            if (i % 3 == 0)
                break;
            if (i > j)
                continue;
            k = i * 10 + j;
            printf("%d ", k);
        }
        printf("\n");
    }
}*/
/*void main()
{
    for (;;)
        ;
    printf("HI");
    while (1)
        printf("HELLO");
    do
    {
        printf("BYE");
    } while (1);
}*/
/*void main()
{
    //	clrscr();
    switch (printf("a"), printf("abc"), printf("ab"))
    {
    case 1:
        switch (printf("first"))
            break;
    case 2:
        switch (printf("second"))
            break;
    default:
        switch (printf("third"))
            break;
    }
}*/

#define A(x) \
    x;       \
    x;       \
    x;       \
    x;       \
    x;       \
    x;       \
    x;       \
    x;       \
    x;       \
    x;
int main()
{
    int n = 1;
   // A(A(A(printf("%d \n", n++))));
    A(printf("%d \n", n++));
    return 0;
}
