#include <stdio.h>
int main(){
    int p,q;
    scanf("%d%d",&p,&q);
    if(p<q){
        printf("Profit");
    }
    else if(p>q){
        printf("Loss");
    }
    else{
        printf("No Profit No Loss");
    }
    return 0;
}