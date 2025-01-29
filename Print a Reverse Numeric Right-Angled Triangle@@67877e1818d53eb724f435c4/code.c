#include <stdio.h>
int main() {
    int i,j,rows;
    scanf("%d",&rows);
    for(int i=1;i<=rows;i++){
        for(int j=1;j<=rows;j++){
            if(j=rows-i){
                printf("");
            }
            else{
                printf("%d",j);
            }
        }
        printf("\n");
    }
    return 0;
}