/*
	Michelle Samson

	C program to check palindrome number.
	the user is prompted to enter an integer, and the program checks if it is a palindrome number or not. The program first stores the original number in originalN. The program then reverses the number by repeatedly dividing by 10 and adding the remainder to reversedN. Finally, the program checks if originalN is equal to reversedN, and prints whether the number is a palindrome or not.
	

*/

#include <stdio.h>

int main() {
    int n, reversedN = 0, originalN, remainder;

    printf("Enter an integer: ");
    scanf("%d", &n);

    originalN = n;

    // Reverse the number
    while (n != 0) {
        remainder = n % 10;
        reversedN = reversedN * 10 + remainder;
        n /= 10;
    }

    // Check if the number is a palindrome
    if (originalN == reversedN) {
        printf("%d is a palindrome.\n", originalN);
    }
    else {
        printf("%d is not a palindrome.\n", originalN);
    }

    return 0;
}
