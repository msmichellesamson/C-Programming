/*
	Michelle Samson

	C program to to check if a number is an Armstrong number or not:
	  the user is prompted to enter an integer, and the program checks if it is an Armstrong number or not. An Armstrong number is a number that is equal to the sum of its own digits raised to the power of the number of digits. For example, 153 is an Armstrong number, because 1^3 + 5^3 + 3^3 = 153.

The program first stores the original number in originalN. The program then counts the number of digits in the number by repeatedly dividing by 10 and incrementing digits. The program then checks if the number is an Armstrong number by repeatedly dividing by 10, finding the remainder, and adding the remainder raised to the power of digits to result. Finally, the program checks if result is equal to the original number, and prints whether the number is an Armstrong number or not.

*/

#include <stdio.h>
#include <math.h>

int main() {
    int n, originalN, remainder, result = 0, digits = 0;

    printf("Enter an integer: ");
    scanf("%d", &n);

    originalN = n;

    // Count the number of digits in the number
    while (originalN != 0) {
        originalN /= 10;
        digits++;
    }

    originalN = n;

    // Check if the number is an Armstrong number
    while (originalN != 0) {
        remainder = originalN % 10;
        result += pow(remainder, digits);
        originalN /= 10;
    }

    if (result == n) {
        printf("%d is an Armstrong number.\n", n);
    }
    else {
        printf("%d is not an Armstrong number.\n", n);
    }

    return 0;
}
