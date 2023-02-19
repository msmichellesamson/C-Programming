/*
	Michelle Samson

	C program that multiplies two matrices:

	we use three nested for loops to print the alphabet triangle. The outer loop iterates over the rows of the triangle, the first inner loop iterates over the spaces to be printed before the letters, and the second inner loop iterates over the letters in each row.

The first inner loop prints the required number of spaces before each row to align the letters in the center. We calculate the number of spaces using rows - i - 1, where i is the current row number.

The second inner loop prints the letters in increasing order up to the current row number. We use alphabet + j to print each letter, where alphabet is the starting letter 'A', and j is the index of the letter in the row.

The third inner loop prints the letters in decreasing order from the second last letter of the row to the first letter of the row. We use the same method to print each letter as in the second inner loop, but with j decreasing from i - 1 to 0.

After each row is complete, we print a newline character using the printf() function to move to the next line and start a new row.

Note that the number of letters in each row is equal to the row number, starting with one letter in the first row and increasing by one letter in each subsequent row. This is why the second and third inner loops iterate up to and down from i, respectively.

*/

#include <stdio.h>

int main() {
    int rows;
    char alphabet = 'A';

    // Get number of rows from user
    printf("Enter number of rows: ");
    scanf("%d", &rows);

    // Print alphabet triangle
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < rows - i - 1; j++) {
            printf(" ");
        }
        for (int j = 0; j <= i; j++) {
            printf("%c", alphabet + j);
        }
        for (int j = i - 1; j >= 0; j--) {
            printf("%c", alphabet + j);
        }
        printf("\n");
    }

    return 0;
}
