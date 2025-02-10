#include <stdio.h>
#include <string.h>
int main() {
    char str[100];
    fgets(str,sizeof(str),stdin);
    str[strcspan(str,"\n")]='\0';
    int length= strlen(str);
    int start,end;
    char temp;
    while(start<end){
        temp=str[start];
        str[end]=temp;
        start++;
        end--;
    }
    for(int i=0;i<=length;i++){
        if(str[i]==''||str[i]=='\0'){
            start=i+1;
        }
    }
    printf("%s",str);
    return 0;
    
}