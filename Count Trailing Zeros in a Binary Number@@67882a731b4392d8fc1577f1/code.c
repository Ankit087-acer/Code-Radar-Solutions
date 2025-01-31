#include <stdio.h>
int main() {
    int n,i,trail=0,size;
    scanf("%d",&n);
    size=sizeof(n)*8;
    for(i=0;i<=size;i++){
        if((n>>i)&1){
            break;
        }
        trail++;
    }
    printf("%d",trail);
    return 0;
}