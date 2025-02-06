#include <stdio.h>
#include <string.h>
int main() {
    char str[100];
    scanf("%s",str);
    int length= strlen(str);
    int start=0,end=length-1;
    char temp;
    while(start<end){
        temp=str[start];
        str[start]=str[end];
        str[end]=temp;
        start++;
        end--;
    }
    printf("%s",str);
    return 0;
}