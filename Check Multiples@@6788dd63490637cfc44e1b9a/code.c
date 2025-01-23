#include <stdio.h>
int main(){
    int d,q;
    scanf("%d%d",&d,&q);
    if(d%q==0){
        printf("Yes");
    }
    else{
        printf("No");
    }
    return 0;
}