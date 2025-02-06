#include <stdio.h>
#include <string.h>
int main() {
    char str1[100],str2[100],result[200];
   fgets(str1,sizeof(str1),stdin);
   fgets(str2,sizeof(str2),stdin);

    int i=0,j=0;
    while(str1[i]!='\0'){
        result[i]=str1[i];
        i++;
    }
    while(str2[j]!='\0'){
        result[j]=str2[j];
        i++;
        j++;
}
result[i]='\0';
printf("%s",result);
    return 0;
}