#include <stdio.h>
#include <stdlib.h>

int isPalindrome(int num) {
    int temp = num, reverse = 0;

    // Handle negative numbers: return 0 if negative
    if (num < 0) return 0;

    // Handle the case for zero, which is a palindrome
    if (num == 0) return 1;

    while (temp > 0) {
        reverse = reverse * 10 + (temp % 10);
        temp /= 10;
    }

    return (num == reverse);
}

int main() {
    int size;

    // Read the size of the array
    scanf("%d", &size);

    // Edge case: if size is 0, just return "NO"
    if (size == 0) {
        printf("NO\n");
        return 0;
    }

    // Dynamically allocate memory for the array
    int *arr = (int*)malloc(size * sizeof(int));

    if (arr == NULL) {
        printf("Memory allocation failed!\n");
        return -1;  // Exit if memory allocation fails
    }

    // Read array elements
    for (int i = 0; i < size; i++) {
        scanf("%d", &arr[i]);
    }

    // Check for palindrome numbers
    int found_palindrome = 0;
    for (int i = 0; i < size; i++) {
        if (isPalindrome(arr[i])) {
            printf("YES\n");
            found_palindrome = 1;
            break; // Stop at the first palindrome
        }
    }

    // If no palindrome is found
    if (!found_palindrome) {
        printf("NO\n");
    }

    // Free dynamically allocated memory
    free(arr);

    return 0;
}
