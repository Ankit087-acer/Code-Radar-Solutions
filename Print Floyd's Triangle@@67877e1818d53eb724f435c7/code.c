#include <stdio.h>
int main(){
    int n,r=1;
    scanf("%d",&n);
    for(int i=1;i<=n;i++){
        for(int j=1;j<=i;j++){
            printf("%d ",r);
            r++;
        }
        printf("\n");
    }
    return 0;
}