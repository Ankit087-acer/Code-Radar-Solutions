#include <stdio.h>
#include <string.h>
int main() {
    char str[100];
    fgets(str,sizeof(str),stdin);
    int count=0,i=0;
    while(str[i]==''){
        i++;
    }
    while(str[i]!='\0'){
        if(str[i]==''&&str[i+1]!=''&&str[i+1]!='\0'){
            count++;
        }
        i++;
    }
    printf("%d",count);
    return 0;
}