#include <stdio.h>
#include <stdlib.h>
#include <conio.h>

void listall(int A[], int aSz);

int main()
{
   // int theSz = 10;
  //  int arr[] = {10, 9, 1, 3, 2, 8, 4, 7, 5, 6};
    int theSz = 4;
    int arr[] = {10, -1, 1, 3};
    listall(arr, theSz);
}

void listall(int A[], int n)
{
    int i, j;
    int minidx;
    for (i = 0; i < n; ++i)
    {
        minidx = -1;
        for (j = i + 1; j < n /*&& j >= minidx*/; j++)
        {
            if ( (A[j] != -1) && (A[j] < A[i]) )
            {
                minidx = j;
                printf("\n A[i] : %d , A[j] : %d", A[i], A[j]);
            }
            
        }
        printf("%d  %d   ", minidx, A[minidx]);
        A[minidx] = -1;
        printf(" --   %d   %d  \n", minidx, A[minidx]);
    }
    printf("\nCompleted");
}