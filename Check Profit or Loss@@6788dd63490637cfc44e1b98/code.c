#include <stdio.h>
int main(){
    int p,q;
    scanf("%d%d",&p,&q);
    if(p<q){
        printf("Profit");
    }
    else{
        printf("Loss");
    }
    return 0;
}