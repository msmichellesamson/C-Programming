/*
	Michelle Samson

	C program to check prime number.
	the user is prompted to enter a positive integer, and the program checks if it is a prime number or not. The program iterates from 2 to n/2 and checks if any number in that range divides n evenly. If a factor is found, isPrime is set to 0 and the loop is exited. If no factors are found, isPrime remains 1, and the program prints that the number is prime. If the user enters 1, the program prints that 1 is not a prime number.
	

*/

#include <stdio.h>

int main() {
    int n, i, isPrime = 1;

    printf("Enter a positive integer: ");
    scanf("%d", &n);

    // Check if n is a prime number
    for (i = 2; i <= n/2; i++) {
        if (n % i == 0) {
            isPrime = 0;
            break;
        }
    }

    if (n == 1) {
        printf("1 is not a prime number.\n");
    }
    else {
        if (isPrime == 1) {
            printf("%d is a prime number.\n", n);
        }
        else {
            printf("%d is not a prime number.\n", n);
        }
    }

    return 0;
}
