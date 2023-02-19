/*
	Michelle Samson

	c program to print sum of digits of a number.
	  the user is prompted to enter an integer, and the program calculates the sum of its digits. The program repeatedly divides the number by 10 and adds the remainder (the last digit) to sum. Finally, the program prints the calculated sum.

*/
#include <stdio.h>

int main() {
    int n, sum = 0;

    printf("Enter an integer: ");
    scanf("%d", &n);

    while (n != 0) {
        sum += n % 10;
        n /= 10;
    }

    printf("The sum of the digits is %d.\n", sum);

    return 0;
}
