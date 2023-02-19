	Michelle Samson

	C program to print "Hello" without using main() function.

	Technically, it's not possible to write a C program without the main() function, because the main() function is the entry point of the program that the operating system expects to find when it runs the program.

However, it is possible to use preprocessor macros and other C language features to define a function that gets executed before main(). Here's an example program that prints "Hello" without using the main() function:

In this program, we define a preprocessor macro startup_fn() that uses the __attribute__((constructor)) GCC extension to specify that the hello() function should be executed before main(). The hello() function simply prints "Hello" using the printf() function.

This code defines the hello() function and specifies that it should be executed before main().

When we compile and run the program, the hello() function is executed before main() and prints "Hello" to the console.

*/

#include <stdio.h>

#define startup_fn() \
    __attribute__((constructor)) \
    void hello() { \
        printf("Hello\n"); \
    }

startup_fn()

}
