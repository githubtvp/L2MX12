#include <stdio.h>
#include <stdlib.h>
void main() // changeArr (int *a, int n)
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
            {                              // positive even element – increase by 1
                printf("\n2. Here  : %d", *p);
                *(p)++;
            }
            else if (*(p) > 0 && (*(p) % 2 == 1) ) //_____________ )
            {
                // positive odd element – decrease by 1
                printf("\n3. Here  : %d", *p);
                *(p)--;
            }
            p = p++; //________________ ; // increment for next iteration
        }        // end while
    printf("\n");
    for (int i = 0; i < n; i++)
    {
        printf("%d ", a[i]);
    }
}