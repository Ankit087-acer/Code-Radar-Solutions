#include <stdio.h>

int isPalindrome(int num) {
    int temp = num, reverse = 0;

    // Convert negative numbers to positive
    if (num < 0) return 0; 

    while (temp > 0) {
        reverse = reverse * 10 + (temp % 10);
        temp /= 10;
    }
    
    return (num == reverse);
}

int main() {
    int size, arr[100];

    // Read the size of the array
    scanf("%d", &size);

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

    return 0;
}
        
    