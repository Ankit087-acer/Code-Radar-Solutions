#include <stdio.h>
#include <stdbool.h>
bool boolchecker(char s[]){
for(int i=0;s[i]!='\0';i++){
        if(s[i]!='0' && s[i]!='1'){
            return false;
        }
        else{
            return true;
        }
    }
    
}
int main(){
    char s[100];
    scanf("%s",s);
    if(boolchecker(s)){
        printf("Yes");
    }
    else{
        printf("No");
    }
    
    return 0;
}