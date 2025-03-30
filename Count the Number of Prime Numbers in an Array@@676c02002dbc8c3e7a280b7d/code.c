#include <stdio.h>
int prime_checker(int a) {
    if (a <= 1) {
        return 0;
    }
    for (int i = 2; i * i <= a; i++) {
        if (a % i == 0) {
            return 0;
        }
    }
    return 1;
}

void prime_generator(int n) {
    int count = 0;
    
    for (int i = 2; i <= n; i++) {
        if (prime_checker(i)) {
           
            count++;
        }
    }
    printf("%d", count);
}

int main() {
    int n;
   
    scanf("%d", &n);
    prime_generator(n);
    return 0;
}