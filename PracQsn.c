#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define pr(expr) printf(#expr " = %d\n", expr)
#define prc(expr) printf("%c ", expr)
#define prs(expr) printf("%s ", expr)
#define prn() printf("\n")
void qsn1();
void qsn2();

void main() // changeArr (int *a, int n)
{
    int x, y;
    // x = 33;
    // y = 7;
    // pr(x / y);         // quotient
    // pr(x / y * y);     // quotient * divisor
    // pr(x - x / y * y); // dividen - (quotient * divisor) = remainder

    // char *name = "This is a test line of more than 10 char";
    // prs(name);
    // printf("\nFirst 11 char : %11.11s \n", name);
  //  printf(x);
    printf("%d");
   // printf();
    printf("\nNumber = %d");

    // qsn1();
    // prn();
    // qsn2();
}

void qsn2()
{
    char buffer[10];

    // Fill the buffer with the value 'A'
    memset(buffer, 'A', sizeof(buffer));

    // Print the contents of the buffer
    for (int i = 0; i < sizeof(buffer); i++)
    {
        // printf("%c ", buffer[i]);
        char c = buffer[i];
        prc(c);
    }
    prn();
    pr(5 + 6 * 7);
    int x = 42;
    pr(x);
}
void qsn1()
{
    int a[10] = {2, 1, 3, 4, 5, 6, -1, 0, 7, 8};
    int n = 10;
    int *p;
    p = a;
    for (int i = 0; i < n; i++)
    {
        printf("%d ", p[i]);
    }
    while (p < (a + n))
    {
        printf("\n1. Here  : %d", *p);
        if (*(p) > 0 && (*(p) % 2 == 0)) //___________________________________ )
        {                                // positive even element – increase by 1
            printf("\n2. Here  : %d", *p);
            (*(p))++;
            printf("\n\t2A. Here  : %d", *p);
        }
        else if (*(p) > 0 && (*(p) % 2 == 1)) //_____________ )
        {
            // positive odd element – decrease by 1
            printf("\n3. Here  : %d", *p);
            (*(p))--;
            printf("\n\t3A. Here  : %d", *p);
        }
        p = ++p; //________________ ; // increment for next iteration
    }            // end while
    printf("\n");
    for (int i = 0; i < n; i++)
    {
        printf("%d ", a[i]);
    }
}