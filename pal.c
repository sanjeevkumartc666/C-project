#include <stdio.h>
#include <string.h> // Required for strlen()

void palindrome () {
    char str[100];
    int length, i;
    int isPalindrome = 1; // Flag, assume it's a palindrome initially

    printf("Enter a string: ");
    // Use scanf for simplicity, gets() or fgets() is safer for spaces
    scanf("%s", str); 

    length = strlen(str);

    // Loop from start and end, moving inwards
    for (i = 0; i < length / 2; i++) {
        if (str[i] != str[length - 1 - i]) {
            isPalindrome = 0; // If mismatch found, set flag to false
            break;            // Exit the loop early
        }
    }

    if (isPalindrome) {
        printf("'%s' is a palindrome.\n", str);
    } else {
        printf("'%s' is not a palindrome.\n", str);
    }

}

