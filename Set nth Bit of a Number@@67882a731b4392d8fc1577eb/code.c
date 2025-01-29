#include <stdio.h>
int main() {
    int u,i;
    scanf("%d%d",&u,&i);
    u=u|(1<<i);
    printf("%d",u);
   return 0;
}