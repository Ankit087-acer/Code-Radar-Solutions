#include <stdio.h>
#include <string.h>
int main() {
   char str[100];
   scanf("%s",str);
   int start=0;
   int end=strlen(str)-1;
   
    if(str[start]!=str[end]){
        printf("Yes");}
  
    else{
        printf("No");
    }
   
    return 0;
}