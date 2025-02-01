#include <stdio.h>
int main(){
    int d,b[32],x;
    scanf("%d",&d);
    if(n==0){
        printf("0");
    }
    for(x=0;d>0;x++){
        b[x]=d%2;
        d/=2;
    }
    for(int y=x-1;y>=0;y--){
        printf("%d",b[y]);
    }
    
    return 0;
}