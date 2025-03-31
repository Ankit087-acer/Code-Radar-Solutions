#include <stdio.h>
int main() {
    int size, arr[100],reverse=0;
    scanf("%d", &size);
    for (int i = 0; i < size; i++) {
        scanf("%d", &arr[i]);
    }

    int found_palindrome = 0;
    for (int i = 0; i < size; i++) {
        int temp = arr[i];
        while (temp > 0) {
            reverse = reverse * 10 + (temp % 10);
            temp /= 10;
        }
        if(arr[i]==reverse){
           printf("YES");
           found_palindrome=1;
           break;
    }
    else{
        printf("NO");
        found_palindrome=0;
        
    }
        
    }
    
    
    return 0;
}