#include <stdio.h>
int main() {
    char c;
    scanf("%c",&c);
    if(c>='0' && c<='9'){
        printf("Digit");
    }
    else if(1){
        if(c=='a'||c=='A'||c=='u'||c=='U'||c=='e'||c=='E'||c=='i'||c=='I'||c=='o'||c=='O'){
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