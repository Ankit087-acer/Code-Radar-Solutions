#include <stdio.h>
int main() {
    int n;
    scanf("%d",&n);
    n%5==0 && n%11==0?printf("Divisible"):printf("Not Divisible");
    return 0;
}