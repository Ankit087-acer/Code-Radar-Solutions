#include <stdio.h>
#include <ctype.h>

int main(){
    char str[100];
    fgets(str,sizeof(str),stdin);
    int i,j=0;
    for(i=0;str[i]!='\0';i++){
        if(str[i]=='a'||str[i]=='A'||str[i]=='u'||str[i]='U'||str[i]='i'||str[i]='I'||str[i]=='o'||str[i]=='O'||str[i]='e'||str[i]='E'||str[i]==' '){
          str[j++]=str[i];
        }
}
str[j]='\0';
printf("%s",str);
return 0;
}