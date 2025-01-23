#include <stdio.h>
int main() {
    char c;
    scanf("%c",&c);
    if(c>='0' && c<='9'){
        printf("Digit");
    }
    else if(1){
        if(c=='a'||c=='u'||c=='e'||c=='i'||c=='o'){
            printf("Vowel");
        }
        else{
            printf("Consonant");
        }
    }
    else{
        printf("Special Character");
    }
    return 0;
}