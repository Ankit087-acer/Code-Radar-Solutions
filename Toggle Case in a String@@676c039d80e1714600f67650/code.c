#include <stdio.h>
int main(){
    char s[100];
    fgets(s,sizeof(s),stdin);
    for(int i=0;str[i]!=0;i++){
        if(str[i]>='a' && str[i]<='z'){
            str[i]=str[i]-('a'-'A');
        }
        else if(str[i]>='A'&&str[i]<='Z'){
           str[i]=str[i]+('a'-'A');
        }
    }
    printf("%s",s);
    return 0;
}