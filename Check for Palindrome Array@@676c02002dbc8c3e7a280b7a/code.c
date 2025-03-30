#include <stdio.h>
int main() {
    int size, arr[100];
    scanf("%d", &size);
    for (int i = 0; i < size; i++) {
        scanf("%d", &arr[i]);
    }

    int found_palindrome = 0;
    for (int i = 0; i < size; i++) {
        int temp = arr[i], reverse = 0;
        while (temp > 0) {
            reverse = reverse * 10 + (temp % 10);
            temp /= 10;
        }

        if (arr[i] == reverse) {
            printf("YES\n");
            found_palindrome = 1;
            break;
        }
    }

    if (!found_palindrome) {
        printf("NO\n");
    }

    return 0;
}