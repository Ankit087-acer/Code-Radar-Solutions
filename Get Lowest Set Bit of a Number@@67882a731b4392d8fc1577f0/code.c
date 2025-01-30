#include <stdio.h>
int main() {
    int n,count =0;
    scanf("%d",&n);
    while((n&1)==0){
        n=n>>1;
        printf("%d",count);
        count++;}
       

    return 0;
}