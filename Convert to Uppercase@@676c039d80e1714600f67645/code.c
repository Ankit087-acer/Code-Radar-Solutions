#include <stdio.h>
#include <ctype.h>
int main(){
    char ch[100];
    scanf("%s",&ch);
    for(int i=0;ch[i]!='\0';i++){
        ch[i]=toupper(ch[i]);
    }
    printf("%s\n",ch);
    return 0;
}