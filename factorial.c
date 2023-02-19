/*
	Michelle Samson

	C program to calculate the factorial of a number.
	 the user is prompted to enter a positive integer, and the program calculates its factorial. The program first checks if the number is negative, and prints an error message if it is. If the number is non-negative, the program calculates the factorial using a for loop, multiplying the current value of factorial by the loop index i. Finally, the program prints the calculated factorial. Note that we use a long long data type to store the factorial, since it can get very large very quickly.

*/
#include <stdio.h>

int main() {
    int n, i;
    long long factorial = 1;

    printf("Enter a positive integer: ");
    scanf("%d", &n);

    if (n < 0) {
        printf("Error: Factorial of a negative number doesn't exist.\n");
    }
    else {
        for (i = 1; i <= n; i++) {
            factorial *= i;
        }
        printf("The factorial of %d is %lld.\n", n, factorial);
    }

    return 0;
}
