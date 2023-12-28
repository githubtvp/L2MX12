#include <stdio.h>


void printMatrix(int n, int matrix[][n]);

// // Function to rotate the matrix 90 degrees clockwise
// void rotateMatrix(int n, int matrix[][n]) {
//     // Transpose the matrix
//     for (int i = 0; i < n; i++) {
//         for (int j = i + 1; j < n; j++) {
//             // Swap matrix[i][j] and matrix[j][i]
//             int temp = matrix[i][j];
//             matrix[i][j] = matrix[j][i];
//             matrix[j][i] = temp;
//         }
//     }
//     printf("Transposed Matrix:\n");
//     printMatrix(n, matrix);

//     // Reverse each row of the transposed matrix
//     for (int i = 0; i < n; i++) {
//         for (int j = 0; j < n / 2; j++) {
//             // Swap matrix[i][j] and matrix[i][n-j-1]
//             int temp = matrix[i][j];
//             matrix[i][j] = matrix[i][n - j - 1];
//             matrix[i][n - j - 1] = temp;
//         }
//     }

//     printf("Reversed each row Matrix:\n");
//     printMatrix(n, matrix);
// }


// Function to rotate the matrix 90 degrees clockwise
void rotateMatrix(int n, int matrix[][n]) {
    // Transpose the matrix
    for (int j = 0; j < n; j++) {
        for (int i = j + 1; i < n; i++) {
            // Swap matrix[i][j] and matrix[j][i]
            int temp = matrix[i][j];
            matrix[i][j] = matrix[j][i];
            matrix[j][i] = temp;
        }
    }
    printf("Transposed Matrix:\n");
    printMatrix(n, matrix);

    // // Reverse each row of the transposed matrix
    // for (int i = 0; i < n; i++) {
    //     for (int j = 0; j < n / 2; j++) {
    //         // Swap matrix[i][j] and matrix[i][n-j-1]
    //         int temp = matrix[i][j];
    //         matrix[i][j] = matrix[i][n - j - 1];
    //         matrix[i][n - j - 1] = temp;
    //     }
    // }

    // printf("Reversed each row Matrix:\n");
    // printMatrix(n, matrix);
}
// Function to print a matrix
void printMatrix(int n, int matrix[][n]) {
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            printf("%d ", matrix[i][j]);
        }
        printf("\n");
    }
}

int main() {
    // Define the size of the matrix
    int n = 3; // Change this value as needed

    // Declare and initialize the matrix
    int matrix[3][3] = {
        {1, 2, 3},
        {4, 5, 6},
        {7, 8, 9}
    };

    // Print the original matrix
    printf("Original Matrix:\n");
    printMatrix(n, matrix);

    // Rotate the matrix 90 degrees clockwise
    rotateMatrix(n, matrix);

    // Print the rotated matrix
 //   printf("\nMatrix after 90-degree clockwise rotation:\n");
  //  printMatrix(n, matrix);

    return 0;
}

