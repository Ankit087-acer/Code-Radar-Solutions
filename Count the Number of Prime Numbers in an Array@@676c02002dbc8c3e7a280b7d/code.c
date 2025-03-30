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

void prime_generator(int size,int arr[100]) {
    int count = 0;
    
    for (int i = 2; i <= size; i++) {
        if (prime_checker(arr[i])) {
           
            count++;
        }
    }
    printf("%d", count);
}

int main() {
    int size,arr[100];
    scanf("%d",&size);
    for(int i=1;i<=size;i++){
        scanf("%d",&arr[i]);
    }
   
    
    prime_generator(size,arr);
    return 0;
}