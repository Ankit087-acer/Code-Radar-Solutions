#include <stdio.h>
#include <string.h>
int main() {
    char str1[200],str2[100];
    scanf("%s",str1);
    scanf("%s",str2);
    int i=0,j=0;
    while(str1[i]!='\0'){
        i++;
    }
    while(str2[j]!='\0'){
        str1[i]=str2[j];
        j++;
        i++;
}
str1[i]='\0';
printf("%s",str1);
    return 0;
}