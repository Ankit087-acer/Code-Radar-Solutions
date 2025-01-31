#include <stdio.h>

int main(){
    int n,i,lead=0,msb,size;
    scanf("%d",&n);
    size=sizeof(n)*8;
    msb=1<<(size-1);
    for(i=0;i<=size;i++){
        if((n<<i)&msb){
            break;
        }
        lead++;
    }
    printf("%d",lead);
    return 0;
}