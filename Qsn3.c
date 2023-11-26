
#include <stdio.h>
/*3.
ii. The following C function is used to compute the product of two matrices, with each matrix
represented as a 2-d array. The function takes as parameters a 2-d array A with n_r_A rows and
n_c_A columns and a 2-d array B with n_r_B rows and n_c_B columns. The function returns a
pointer to the first element of the product matrix C. Fill in the missing lines.
*/
int **mult(int **a, int n_r_a, int n_c_a, int **b, int n_r_b, int n_c_b)
{
    int **c; // declare suitable variable for returning results
    int sum, i, j, k;
    c = (int **)malloc((n_r_a) * sizeof(int *)); // dynamic memory allocation
    for (i = 0; i < n_r_a; i++)
    {
        c[i] = (int *)malloc((n_c_a) * sizeof(int)); // dynamic memory allocation
        for (j = 0; j < n_c_a; j++)
        {
            c[i][j] = 0;
            for (k = 0; k < n_c_a; k++)
            (*(*(c+i)+j)) += **(a + i*n_c_a + k)***(b + k*n_c_b + j);
//-------------------------------------------;
        }
    }
    return c;
}
