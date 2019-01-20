#include <stdio.h>

int main()
{
    int n = 94, c;
    unsigned long long int first = 0, second = 1, next = 0;

// intro to what the code does
    printf("This program will print %d Fibonacci number(s)\n\n",n);
    printf("First %d terms of Fibonacci series are :\n\n\n",n);

// recursive loop for calculations
    for ( c = 1 ; c <= n ; c++ )
    {
        // Conditional for nice formatting
        if (c<=9)
        printf("Element #0%d: %llu\n",c, first);
        else
        printf ("Element #%d: %llu\n",c, first);
        // Arithmetic operations
        next = first + second;
        first = second;
        second = next;
    }
    getchar();
    return 0;
}
