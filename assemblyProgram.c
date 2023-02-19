/*
	Michelle Samson

	C program that adds two numbers using inline assembly code in GCC:

	we have two integer variables a and b initialized to 10 and 20 respectively. We also have an integer variable sum to store the result of the addition.

The inline assembly code is written inside the asm statement. The addl instruction is used to add the contents of ebx register to eax register. We use % to denote the registers, and %% to escape the % character for use inside the string. The input and output operands are specified using the : : syntax.

The first output operand "=a" (sum) specifies that the result of the addition should be stored in the sum variable, and the first input operand "a" (a) specifies that the contents of the a variable should be loaded into the eax register. The second input operand "b" (b) specifies that the contents of the b variable should be loaded into the ebx register.

Finally, we print the value of the sum variable using the printf() function.

*/

#include <stdio.h>

int main() {
    int a = 10, b = 20, sum;

    asm ("addl %%ebx, %%eax;"
         : "=a" (sum)
         : "a" (a), "b" (b)
         );

    printf("Sum = %d\n", sum);

    return 0;
}
