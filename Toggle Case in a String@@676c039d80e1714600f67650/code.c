#include <stdio.h>
int main(){
    char s[100];
    fgets(s,sizeof(s),stdin);
    for(int i=0;s[i]!=0;i++){
        if(s[i]>='a' && s[i]<='z'){
            s[i]=s[i]-('a'-'A');
        }
        else if(s[i]>='A'&&s[i]<='Z'){
           s[i]=s[i]+('a'-'A');
        }
    }
    printf("%s",s);
    return 0;
}