#include <stdio.h>
#include<stdbool.h>
int main(){
    char s[100];
    scanf("%s",s);
    for(int i=0;s[i]!='\0';i++){
        if(s[i]='0' && s[i]='1'){
            printf("Yes");
        }
        else{
            printf("No");
        }
    }
    return 0;
}