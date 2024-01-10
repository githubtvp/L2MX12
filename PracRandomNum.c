#include <stdlib.h>
#include <time.h>
#include <stdio.h>

#define MAXLOWER 10
#define MAXUPPER 25
int main()
{
    int n, range;
    range = MAXUPPER - MAXLOWER;
    srand(time(0));
    for (int i = 0; i < 5; i++)//50 random numbers
    {
        n = MAXLOWER + rand() % range;
        printf("%d\t", n);
    }

    // printf("\nTest line ");
    return 0;
}
