#include <stdio.h>
int main(){
    int d,b[32],x;
    scanf("%d",&d);
    for(x=0;d>=0;x++){
        b[x]=d%2;
        d/=2;
    }
    for(x-=1;x>=0;x--){
        printf("%d",b[x]);
    }
    return 0;
}