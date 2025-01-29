#include <stdio.h>
int main() {
    int n,i;
    scanf("%d",&n);
    for(i=31;i>=0;i--){
    int bit=(n>>i)&1;
    printf("%d",bit);}
    printf("\n");
    return 0;
}