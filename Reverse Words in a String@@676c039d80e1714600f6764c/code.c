#include <stdio.h>
#include <string.h>
int main() {
    char str[100];
    fgets(str,sizeof(str),stdin);
    int length= strlen(str);
    int start=0,end=length-1;
    char temp;
    while(start<end){
        temp=str[start];
        str[end]=temp;
        start++;
        end--;
    }
    printf("%s",str);
    return 0;
    
}