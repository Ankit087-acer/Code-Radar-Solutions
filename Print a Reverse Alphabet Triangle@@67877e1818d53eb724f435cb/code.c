#include <stdio.h>
int main() {
    int i,n;
    char j;
    scanf("%d",&n);
    for(i=n;i>=1;i--){
        for(j='A';j<'A'+i;j++){
            printf("%c ",j);
        }
        printf("\n");
    }
    return 0;
}