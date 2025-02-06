#include <stdio.h>
int main() {
    char str[100];
    scanf("%s",str);
    int sum=0;
    for(int i=1;str[i]!='\0';++i){
        sum+=i;
    }
    printf("%d",sum);
    return 0;
}