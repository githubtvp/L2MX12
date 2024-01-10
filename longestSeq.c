#include <stdio.h>
#include <stdlib.h>
#include <conio.h>

int main()
{
    int A[] = {2, 3, 5, 2, 3, 4, 7, 9, 1, 3, 2, 5, 7, 9};
    const int n = 14;
    int i = 0;
    int len = 1;
    int maxlen = 1;
    while (i < n-1)
    {
        if (A[i] < A[i + 1])
        {
            len++;
        }
        else//when the seq of larger number ends
        {
            if (len > maxlen)
                maxlen = len;
            len = 1;//reset to i for next long seq
        }
        i++;
    }
    if (len > maxlen)
                maxlen = len;//last seq len
    printf("\nLength of longest increasing sequence = %d\n", maxlen);            
    printf("\nCompleted");
}