#include <stdio.h>

void factorial() {
    int n, i;
    // Use unsigned long long to handle larger factorial values
    unsigned long long factorial = 1; 

    printf("Enter a non-negative integer: ");
    scanf("%d", &n);

    // Check if the number is negative
    if (n < 0) {
        printf("Factorial of a negative number does not exist.\n");
    } else {
        for (i = 1; i <= n; ++i) {
            factorial *= i; // Equivalent to factorial = factorial * i;
        }
        printf("Factorial of %d = %llu\n", n, factorial);
    }

}

