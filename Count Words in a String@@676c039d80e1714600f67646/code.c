#include <stdio.h>
#include <string.h>
int main() {
    char str[100];
    fgets(str,sizeof(str),stdin);
    str[strcspn(str,"\n")]='\0';
    int count=0,i=0;
    while(str[i]!='\0'){
        if(str[i]==' '||str[i+1]=='\n'){
            count++;
        }
        i++;
    }
    printf("%d",count+1);
    return 0;
}