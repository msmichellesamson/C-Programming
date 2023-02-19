/*
	Michelle Samson

	C program that multiplies two matrices:

	we define two matrices matrix1 and matrix2, each with dimensions ROWS x COLS. We also define a third matrix result to store the result of the multiplication.

We use three nested loops to perform the matrix multiplication: the outer loop iterates over the rows of the first matrix, the middle loop iterates over the columns of the second matrix, and the inner loop performs the dot product of the corresponding row and column.

The dot product is computed by initializing the corresponding element of result to zero, and then adding the product of the corresponding elements of the row and column. This is repeated for all the elements in the row and column, and the final result is stored in the corresponding element of result.

After the multiplication is complete, we print the result by iterating over the rows and columns of result and using the printf() function to print each element.

Note that for matrix multiplication to be possible, the number of columns in the first matrix must be equal to the number of rows in the second matrix. In this example, both matrices have dimensions 3x3.

*/

#include <stdio.h>

#define ROWS 3
#define COLS 3

int main() {
    int matrix1[ROWS][COLS] = {{1, 2, 3}, {4, 5, 6}, {7, 8, 9}};
    int matrix2[ROWS][COLS] = {{9, 8, 7}, {6, 5, 4}, {3, 2, 1}};
    int result[ROWS][COLS];

    // Multiply matrices
    for (int i = 0; i < ROWS; i++) {
        for (int j = 0; j < COLS; j++) {
            result[i][j] = 0;
            for (int k = 0; k < COLS; k++) {
                result[i][j] += matrix1[i][k] * matrix2[k][j];
            }
        }
    }

    // Print result
    printf("Matrix Multiplication:\n");
    for (int i = 0; i < ROWS; i++) {
        for (int j = 0; j < COLS; j++) {
            printf("%d ", result[i][j]);
        }
        printf("\n");
    }

    return 0;
}
