/*
	Michelle Samson

	 c program to print "hello" without using semicolon
	   the printf() function is used to print "hello" without a semicolon. The if statement is used to evaluate the return value of printf(), which is the number of characters printed. Since the string "hello" contains 5 characters, the if statement is always true, and the program does nothing. The return 0; statement is used to exit the program.
*/


#include <stdio.h>

int main() {
    if (printf("hello")) {
        // do nothing
    }

    return 0;
}