#include <stdio.h>
#include <string.h>
int main() {
    char str[100],str2[100];
    scanf("%s",str);
    scanf("%s",str2);
    char str3[100]=strcat(str,str2);
    printf("%s",str3);
    return 0;
}