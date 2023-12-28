#include <stdio.h>

void printMatrix(int n, int matrix[][n]);

// Function to rotate the matrix 90 degrees clockwise
void transposeMatrix(int n, int matrix[][n])
{
    // Transpose the matrix
    for (int i = 0; i < n; i++)
    {
        for (int j = i; j < n; j++)
        {
            // Swap matrix[i][j] and matrix[j][i]
            int temp = matrix[i][j];
            matrix[i][j] = matrix[j][i];
            matrix[j][i] = temp;
        }
    }
 //   printf("Transposed Matrix:\n");
 //   printMatrix(n, matrix);
}

void reverseEachRow(int n, int matrix[][n])
{
    // Reverse each row of the transposed matrix
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n / 2; j++) {
            // Swap matrix[i][j] and matrix[i][n-j-1]
            int temp = matrix[i][j];
            matrix[i][j] = matrix[i][n - j - 1];
            matrix[i][n - j - 1] = temp;
        }
    }
  //  printf("Reversed each row Matrix:\n");
  //  printMatrix(n, matrix);
}

void reverseEachColn(int n, int matrix[][n])
{
    // Reverse each row of the transposed matrix
    for (int j = 0; j < n; j++) {
        for (int i = 0; i < n / 2; i++) {
            // Swap matrix[i][j] and matrix[i][n-j-1]
            int temp = matrix[i][j];
            matrix[i][j] = matrix[n - i - 1][j];
            matrix[n - i - 1][j] = temp;
        }
    }
  //  printf("Reversed each Coln Matrix:\n");
   // printMatrix(n, matrix);
}


// Function to print a matrix
void printMatrix(int n, int matrix[][n])
{
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            printf("%2d ", matrix[i][j]);
        }
        printf("\n");
    }
}

int main()
{
    // Define the size of the matrix
    int n = 4; // Change this value as needed

    // Declare and initialize the matrix
    int matrix[4][4] = {
        {1, 2, 3, 10},
        {4, 5, 6, 11},
        {7, 8, 9, 12},
        {13, 14, 15, 16}};

    // Print the original matrix
    printf("Original Matrix:\n");
    printMatrix(n, matrix);

    // Rotate the matrix 90 degrees clockwise
    transposeMatrix(n, matrix);
   // reverseEachRow(n, matrix);
    reverseEachColn(n, matrix);
    transposeMatrix(n, matrix);
  //  reverseEachRow(n, matrix);
    reverseEachColn(n, matrix);
    // Print the rotated matrix
  //  printf("\nMatrix after 90-degree clockwise rotation:\n");
  //  printMatrix(n, matrix);

    printf("\nMatrix after 90-degree Anti clockwise rotation:\n");
    printMatrix(n, matrix);
    return 0;
}
