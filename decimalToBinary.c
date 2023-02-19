/*
	Michelle Samson

	c program to convert decimal number to binary.

	we first prompt the user to enter a decimal number using the printf() and scanf() functions.

We then use a while loop to convert the decimal number to binary. In each iteration of the loop, we calculate the remainder when the decimal number is divided by 2, which gives us the rightmost digit of the binary representation. We add this digit to an array called binary, and then divide the decimal number by 2 to get the next digit.

We keep repeating this process until the decimal number is zero, at which point we have converted the entire decimal number to binary.

Finally, we use a for loop to print the binary representation by iterating over the binary array in reverse order (starting from the last digit) and printing each digit using the printf() function.

Note that the maximum size of the binary array is 32, which is the number of bits in an int on most systems. If you need to convert larger numbers, you may need to use a larger array or a different data type.

*/

#include <stdio.h>

int main() {
    int decimal, binary[32], i = 0;

    // Get decimal input from user
    printf("Enter a decimal number: ");
    scanf("%d", &decimal);

    // Convert decimal to binary
    while (decimal > 0) {
        binary[i] = decimal % 2;
        decimal /= 2;
        i++;
    }

    // Print binary output
    printf("Binary representation: ");
    for (int j = i - 1; j >= 0; j--) {
        printf("%d", binary[j]);
    }

    return 0;
}
