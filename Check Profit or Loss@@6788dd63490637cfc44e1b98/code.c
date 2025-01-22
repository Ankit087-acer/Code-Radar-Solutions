#include <stdio.h>
int main() {
    int p,q;
    scanf("%d%d",&p,&q);
    if(p>q){
        printf("Loss");
    }
    else if(p<q){
        printf("Profit");
   }
   else{
    printf("No Profit No Loss");
   }
   return 0;
}