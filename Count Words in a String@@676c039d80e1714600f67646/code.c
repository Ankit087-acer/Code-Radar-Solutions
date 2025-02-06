#include <stdio.h>
#include <string.h>
int main() {
    char str[100];
    fgets(str,sizeof(str),stdin);
    int count=1,i=0;
    while(str[i]!='\0'){
        if(str[i]==' '||str[i+1]=='\n'||str[i+1]=='\t'){
            count++;
        }
        i++;
    }
    printf("%d",count);
    return 0;
}