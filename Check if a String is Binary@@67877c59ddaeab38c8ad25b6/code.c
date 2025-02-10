#include <stdio.h>
void boolchecker(char s[]){
for(int i=0;s[i]!='\0';i++){
        if(s[i]!='0' && s[i]!='1'){
            return 0;
        }
        else{
            return 1;
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