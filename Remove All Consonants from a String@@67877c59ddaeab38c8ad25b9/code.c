#include <stdio.h>
#include <string.h>

int main(){
    char str[100];
    fgets(str,sizeof(str),stdin);
    int i,j=0;
    for(i=0;i<strlen(str);i++){
        char c=str[i];
         if(c=='a'||c=='A'||c=='u'||c='U'||c=='i'||c=='I'||c=='o'||c=='O'||c=='e'||c=='E'||c==' '){
          str[j++]=str[i];
        }
  }
  str[j]='\0';
  printf("%s",str);
  return 0;
}