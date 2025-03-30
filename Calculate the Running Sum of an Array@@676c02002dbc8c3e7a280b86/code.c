#include <stdio.h>
int main() {
    int size, arr[100], running_sum[100];
    scanf("%d", &size);
    for (int i = 0; i < size; i++) {
        scanf("%d", &arr[i]);
    }
    running_sum[0] = arr[0];
    for (int i = 1; i < size; i++) {
        running_sum[i] = running_sum[i - 1] + arr[i];
    }
    for (int i = 0; i < size; i++) {
        printf("%d ", running_sum[i]);
    }
    return 0;
}