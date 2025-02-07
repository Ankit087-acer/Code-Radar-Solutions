#include <stdio.h>
#include <string.h>
int main() {
   char str[100];
   char k;
   int c=0;
   fgets(str,sizeof(str),stdin);
   scanf("%c",&k);
   for(int i=0;i<strlen(str);i++){
    if(str[i]==k){
        c++;
    }
   }
   printf("%d",c);
    return 0;
}