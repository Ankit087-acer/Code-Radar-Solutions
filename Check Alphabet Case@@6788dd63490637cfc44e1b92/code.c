#include <stdio.h>
int main() {
    char t;
    scanf("%c",&t);
    if(t>='A' && t<='Z'){
        printf("Uppercase");
    }
    else if(t>='a' && t<='z'){
        printf("Lowercase");
    }
    else{
        printf("Not an alphabet");
    }
    return 0;
}