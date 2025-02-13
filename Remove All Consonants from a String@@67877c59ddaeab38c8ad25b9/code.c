#include <stdio.h>
#include <string.h>

int main(){
    char str[100];
    fgets(str, sizeof(str), stdin); // Read input
    int i, j = 0;
    
    // Loop through the string
    for(i = 0; i < strlen(str); i++){
        char c = str[i];
        // Check if the character is a vowel or a space
        if(c == 'a' || c == 'A' || c == 'u' || c == 'U' || 
           c == 'i' || c == 'I' || c == 'o' || c == 'O' || 
           c == 'e' || c == 'E' || c == ' '){
            str[j++] = str[i];  // Keep the character in the result
        }
    }
    str[j] = '\0';  // Null-terminate the string to ensure correct output
    printf("%s", str);  // Print the modified string
    return 0;
}
