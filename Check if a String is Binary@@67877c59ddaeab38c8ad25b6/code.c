#include <stdio.h>
int main(){
    char s[100];
    fgets(s,sizeof(s),stdin);
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