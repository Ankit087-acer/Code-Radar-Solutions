#include <stdio.h>
#include <string.h>
int main() {
    char str[100];
    scanf("%s",str);
    int count=0;
    char vowels[]="aeiouAEIOU";
    for(int i=0;str[i]!='\0';i++){
        if(strchr(vowels,str[i])){
            count++;
        }
    }
    printf("%d",count);
    return 0;
}