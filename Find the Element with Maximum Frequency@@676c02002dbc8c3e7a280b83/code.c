#include <stdio.h>

int main() {
    int size, arr[100], freq[100];
    scanf("%d", &size);

    for (int i = 0; i < size; i++) {
        scanf("%d", &arr[i]);
        freq[i] = -1;
    }

    for (int i = 0; i < size; i++) {
        int count = 1;
        for (int j = i + 1; j < size; j++) {
            if (arr[i] == arr[j]) {
                count++;
                freq[j] = 0;
            }
        }
        if (freq[i] != 0) {
            freq[i] = count;
        }
    }

    int maxFreq = 0, element = -1;
    for (int i = 0; i < size; i++) {
        if (freq[i] > maxFreq) {
            maxFreq = freq[i];
            element = arr[i];
        }
    }

    printf("%d", element);

    return 0;
}