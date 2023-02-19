/*
	Michelle Samson

	C program to print fibonacci series without using recursion
	To print the first n terms of the Fibonacci series and the sum of series is calculated using a loop, with the next number being calculated by adding the two previous numbers.
	

*/

#include <stdio.h>

int main() 
{
    int n, i, t1 = 0, t2 = 1, nextTerm;
    printf("Enter the number of terms: ");
    scanf("%d", &n);
    printf("Fibonacci Series: ");
    for (i = 1; i <= n; i++) {
        printf("%d ", t1);
        nextTerm = t1 + t2;
        t1 = t2;
        t2 = nextTerm;
    }
    return 0;
}
