#include <stdio.h>
#include <ctype.h>

int main(){
    char str[100];
    fgets(str,sizeof(str),stdin);
    int i,j=0;
    for(i=0;str[i]!='\0';i++){
        if(str=='a'||str=='A'||str=='u'||str='U'||str='i'||str='I'||str=='o'||str=='O'||str='e'||str='E'||str=!isalpha(str)){
          str[j++]=str[i];
        }
}
str[j]='\0';
printf("%s",str);
return 0;
}