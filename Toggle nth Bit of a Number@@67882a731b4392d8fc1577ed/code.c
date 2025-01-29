#include <stdio.h>



int main() {
    int n,m;
    scanf("%d%d",&n,&m);
    n=n^(1<<n);
    printf("%d",n);
    return 0;
}