/*
	Michelle Samson

	C program that multiplies two matrices:

	we first prompt the user to enter a number using the printf() and scanf() functions.

We then define three arrays of character pointers, ones[], teens[], and tens[], which contain the words for the digits 1-9, the numbers 10-19, and the multiples of 10 from 20-90, respectively.

We then define the convert_number_to_words() function, which takes an integer num as input and converts it into its equivalent in words.

Inside the function, we first check if the input number is within the range of 0-9999 using an if statement. If it's outside this range, we print an error message and return from the function.

If the input number is 0, we print "zero" and return from the function.

We then convert the number into words by checking the value of its individual digits, from left to right, using a series of if statements. If a particular digit is non-zero, we print its corresponding word, followed by any required punctuation or conjunctions.

Note that for two-digit numbers, we need to handle the special case of numbers from 10-19 separately. We do this by checking if the tens digit is 1, and if it is, printing the corresponding word from the teens[] array and returning from the function.

After all digits have been converted, we print a newline character using the printf() function to move to the next line.

To use this program, simply compile and run it, then enter a number between 0 and 9999 when prompted. The program will convert the number into words and print the result.

*/

#include <stdio.h>

void convert_number_to_words(int num);

int main() {
    int num;

    printf("Enter a number: ");
    scanf("%d", &num);

    convert_number_to_words(num);

    return 0;
}

void convert_number_to_words(int num) {
    char *ones[] = {"", "one", "two", "three", "four", "five", "six", "seven", "eight", "nine"};
    char *teens[] = {"ten", "eleven", "twelve", "thirteen", "fourteen", "fifteen", "sixteen", "seventeen", "eighteen", "nineteen"};
    char *tens[] = {"", "", "twenty", "thirty", "forty", "fifty", "sixty", "seventy", "eighty", "ninety"};

    if (num < 0 || num > 9999) {
        printf("Number out of range (0-9999).\n");
        return;
    }

    if (num == 0) {
        printf("zero\n");
        return;
    }

    if (num / 1000) {
        printf("%s thousand ", ones[num / 1000]);
        num %= 1000;
    }

    if (num / 100) {
        printf("%s hundred ", ones[num / 100]);
        num %= 100;
    }

    if (num / 10) {
        if (num / 10 == 1) {
            printf("%s ", teens[num % 10]);
            return;
        }
        printf("%s ", tens[num / 10]);
        num %= 10;
    }

    if (num) {
        printf("%s", ones[num]);
    }

    printf("\n");
}
