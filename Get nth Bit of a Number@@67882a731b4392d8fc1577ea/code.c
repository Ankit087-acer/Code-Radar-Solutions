#include <stdio.h>
int main(){
    int x,y,z;
    scanf("%d %d",&x,&y);
    z=(x>>y)&1;
    printf("%d",z);
    return 0;
}