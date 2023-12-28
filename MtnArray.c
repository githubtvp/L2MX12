#include <stdio.h>
#include <stdbool.h>
int pr(int arr[], int sz);
void sortArr(int arr[], int sz);
void mtnArr();
void xAssgn();
void whileLoop();
void printChk();
void prFoundDiff();
int prA(int arr[][3], int sz);
void saddlePt();
void isSaddlePt(int sz, int a[][sz], int r, int c);
void inesrtArr();
void armstrongNo();
void oddEvenchangeArr();
int main()
{
    // xAssgn();
     whileLoop();
   //  mtnArr();
    // printChk();
    // prFoundDiff();
   // saddlePt();
    //  inesrtArr();
    // armstrongNo();
    // oddEvenchangeArr();
    return 0;
}

void oddEvenchangeArr()
{
    int a[] = {1, 2, 3, 4, 5, 6, 7, 8, 9};
    int n = 9;
    int *p;
    p = a;
    pr(a, 9);
    printf("\n");
    while (p < a + n)
    {
        if ((*p) % 2 == 0)
        { // positive even element – increase by 1
            (*p)++;
        }
        else if ((*p) % 2 == 1)
        { // positive odd element – decrease by 1
            (*p)--;
        }
        p++; // increment for next iteration
    }        // end while
    pr(a, 9);
}

void armstrongNo()
{
    int number = 1, originalNumber, indicator, result = 0, limit;
    printf("Enter the limit: "); /* Read the limit from the user*/
    scanf("%d", &limit);
    while (number <= limit)
    { /* Loop for updating the result */
        originalNumber = number;
        result = 0;
        while (originalNumber != 0)
        {
            indicator = originalNumber % 10;
            result += indicator * indicator * indicator;
            originalNumber = originalNumber / 10;
        }
        if (result == number)
            printf("%d is an Armstrong number.", number);
        number++;
    }
}
void inesrtArr()
{
    int x, i = 0, j, n, A[100];
    scanf("%d%d", &n, &x);
    for (j = 0; j < n; j++)
        scanf("%d", &A[j]);
    pr(A, n);
    while (x > A[i])
        i++;
    /*find position after which to insert*/
    for (j = n; j >= i; j--) /*make space for inserting x*/
        A[j] = A[j - 1];
    n++;
    A[i] = x; /*insert the element at the required place*/
    for (i = 0; i < n; i++)
        printf("%d ", A[i]);
}
void saddlePt()
{
    int sz = 3;
    int arr[3][3] = {3, 2, 1, 6, 4, 5, 7, 8, 9};
    // int arr[3][3] = {9, 1, 2, 8, 5, 7, 3, 4, 6};
    // int arr[3][3] = {8, 1, 9, 7, 2, 6, 3, 4, 5};
    prA(arr, sz);
    int i, j, k, minCol, maxRow, minVal, maxVal;
    bool saddlePtFound = 0;
    for (i = 0; i < sz; i++)
    {
        //  printf("\n\n Iteration : %d", i);
        minVal = arr[i][0];
        minCol = 0;
        for (j = 0; j < sz; j++)
        {
            if (minVal > arr[i][j])
            {
                minVal = arr[i][j];
                minCol = j;
            }
        }
        //  printf("\nRow min val : %d  at Indx i : %d, Indx minCol : %d ", minVal, i, minCol);

        maxVal = minVal;
        maxRow = 0;
        for (k = 0; k < sz; k++)
        {
            if (maxVal < arr[k][minCol])
            {
                maxVal = arr[k][minCol];
                maxRow = k;
            }
        }
        //  printf("\nColn Max val : %d  at Max Row : %d, Indx minCol : %d \n", arr[k - 1][minCol], maxRow, minCol);

        if (maxVal == minVal)
        {
            saddlePtFound = 1;
            printf("\nSaddlePt val : %d  at Indx i : %d, Indx minCol : %d ", arr[i][minCol], i, minCol);
            break;
        }
    }
    if (!saddlePtFound)
        printf("\nNo saddle Point found !\n");

    int r, c;
    r = i;
    c = minCol;
    isSaddlePt(sz, arr, r, c);
}

void isSaddlePt(int sz, int a[][sz], int r, int c)
{
    int i, j, flag = 1;
    //  printf("\nHere 1 : r : %d, c : %d", r, c);
    for (j = 0; j < sz; j++)
    {
        if (a[r][j] < a[r][c])
            flag = 0;
       // printf("\nHere 2 : r : %d, j : %d", r, j);
    }
    for (i = 0; i < sz; i++)
    {
        if (a[i][c] > a[r][c])
            flag = 0;
      //  printf("\nHere 3: i : %d, c : %d", i, c);
    }
    if (!flag)
    {
        printf("\nNot a saddle Point !\n");
    }
    else
    {
        printf("\nIts a saddle Point !\n");
    }
}

int prA(int arr[][3], int sz)
{
    for (int i = 0; i < sz; i++)
    {
        for (int j = 0; j < sz; j++)
        {
            printf("%d  ", arr[i][j]);
        }
        printf("\n");
    }
}

void prFoundDiff()
{
    int a[100], n, k, i, j, found = 0;
    n = 5;
    k = 3;
    printf("\nEnter the arr aelements : \n");
    for (i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }
    for (i = 0; i < n - 1; i++)
    {
        for (j = 0; j < n; j++)
        {
            if ((a[i] - a[j] == k) || (a[j] - a[i] == k))
                found = 1;
            break;
        }
        if (found)
            break;
    }
    if (found)
        printf("Found indices : %d, %d \n", i, j);
}

void printChk()
{
    int m, n;
    n = 16;
    m = 20;
    do
    {
        if (m < n)
            n = n - m;
        if (n < m)
        {
            int temp = m;
            m = n;
            n = temp;
        }
        if (m < n) // will always be the case, as will get swapped above
            printf("\nN : %d, M : %d   !", n, m);
    } while (m < n);
}
void whileLoop()
{
    int n = 10, cnt = 0, sum = 0;
    while (n-- > 0)
    {
        printf("\n1. N : %d ", n);
        n /= 2;
        cnt++;
        sum += n;
        printf("\n2. cnt : %d, sum : %d, N : %d \n", cnt, sum, n);
    }
    printf("\n3. cnt : %d, sum : %d, N : %d ", cnt, sum, n);
}
void xAssgn()
{
    int x, y;
    x = (x = (x = 2, y = 3 + x));
    printf("\nX = %d\n", x); // result =5, i.e. assignment evaluated last
}
void mtnArr()
{
    int arr[6] = {3, 5, 2, 6, 7, 1};
    int sz = 6;
    sortArr(arr, sz);//sort the array first
    int arr2[sz];
    int k = 1;
  //  for (int i = 0; i < sz / 2; i++)
    for (int i = 0; i < k; i++)
    {
        arr2[i] = arr[i];
    }
   // int j = sz / 2;
    int j = k;
  //  for (int i = sz - 1; i >= sz / 2; i--)
    for (int i = sz - 1; i >= k; i--)
    {
        arr2[j] = arr[i];
        j++;
    }
    printf("\n");
    pr(arr, sz);
    printf("\n");
    pr(arr2, sz);
}

void sortArr(int arr[], int sz)
{
    for (int i = 0; i < sz - 1; i++)
    {
        int minIndx = i;
        for (int j = i; j < sz; j++)
        {
            if (arr[minIndx] > arr[j])
            {
                minIndx = j;
            }
        }
        if (i != minIndx)
        {
            int temp = arr[i];
            arr[i] = arr[minIndx];
            arr[minIndx] = temp;
        }
    }
}

int pr(int arr[], int sz)
{
    for (int i = 0; i < sz; i++)
    {
        printf("%d  ", arr[i]);
    }
}
