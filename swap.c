/*
	Michelle Samson

	c program to swap two numbers without using a third variable:
	   the user is prompted to enter two integers, and the program swaps them without using a third variable. The program uses the fact that a + b is equal to the sum of the original values of a and b, and that a - b is equal to the difference between the original values of a and b. The program assigns a + b to a, which effectively sets a to the sum of the original values of a and b. The program then assigns a - b to b, which effectively sets b to the original value of a. Finally, the program assigns a - b to a, which effectively sets a to the original value of b.
*/

#include <stdio.h>

int main() {
    int a, b;

    printf("Enter two integers: ");
    scanf("%d %d", &a, &b);

    printf("Before swapping: a = %d, b = %d\n", a, b);

    a = a + b;
    b = a - b;
    a = a - b;

    printf("After swapping: a = %d, b = %d\n", a, b);

    return 0;
}
