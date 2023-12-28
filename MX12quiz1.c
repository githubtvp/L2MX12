#include <stdio.h>
#include <stdlib.h>
#include <conio.h>

#define main main()
int main
{
      // clrscr();
       printf("Hello IT City");
}

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
        printf("\n1. %d, ", i); // 16-21

        switch (i)
        {
        case 0:
            i += 5;//no break, goes on to exexcute all following lines
        case 1:
            i += 2;//no break, goes on to exexcute all following lines
        case 5:
            i += 5;//no break, goes on to exexcute all following lines
        default:
            i += 4;//no break, goes on to exexcute all following lines
        }
        printf("2. %d \n", i); // 16-21
    }
}
*/
/*void main()
{
    int i, j, x = 0;
    for (i = 0; i < 5; i++)
    {
        for (j = i; j < 5; j++)
        {
            x++;//x is just being incremented by 1
            printf("%d ", x);
        }
        printf("\n");
    }
    printf("\nFinal X : %d", x); // 5050
}*/
// int main()
// {
//     int x = 0, n;
//    // clrscr();
//     scanf("%d", &n);
//     if (n > 8)
//     {
//         if (n < 9)
//             x = 1;
//     }
//     else
//     {
//         if (n > 4)
//             if (n < 6)
//                 x = 2;
//             else
//                 x = 3;
//         else if (n > 2)
//             x = 4;
//         else
//             x = 5;
//     }
//     printf("%d", x);
// }

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
// void main()
// {
//     for (;;)
//         ;//infinite loop condition
//     printf("HI");
//     while (1)
//         printf("HELLO");
//     do
//     {
//         printf("BYE");
//     } while (1);
// }
// void main()
// {
//     //	clrscr();
//     switch (printf("a "), printf("bcd "), printf("ef"))
//     {
//     case 1:
//         switch (printf("first"))
//             break;
//     case 2:
//         switch (printf("second"))
//             break;
//     default:
//         switch (printf("third"))
//             break;
//     }
// }

// #define A(x) \
//     x;       \
//     x;       \
//     x; printf("\n"); // \
//     // x;       \
//     // x;       \
//     // x;       \
//     // x;       \
//     // x;       \
//     // x;       \
//     // x;
// int main()
// {
//     int n = 1;
//     printf("\n");
//     A(A(A(printf("%d ", n++))));
//   // A(A(printf("%d ", n++)));
//   //  A(printf("%d ", n++));
//     return 0;
// }
