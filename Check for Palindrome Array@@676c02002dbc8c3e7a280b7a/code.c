#include <stdio.h>
int main() {
    int size, arr[100];
    scanf("%d", &size);
    for (int i = 0; i < size; i++) {
        scanf("%d", &arr[i]);
    }

    for (int i = 0; i < size; i++) {
        int temp = arr[i], reverse = 0, c;
        while (temp > 0) {
            c = temp % 10;
            reverse = reverse * 10 + c;
            temp /= 10;
        }

        if (arr[i] == reverse) {
            printf("YES\n");
            break;
        } else {
            printf("NO\n");
            break;
        }
    }

    return 0;
}