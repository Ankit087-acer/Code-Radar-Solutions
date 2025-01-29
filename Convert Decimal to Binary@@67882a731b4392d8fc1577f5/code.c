#include <stdio.h>
int main() {
    int n;
    scanf("%d",&n);
    int bit=(n>>31)&1;
    printf("%d",bit);
    return 0;
}