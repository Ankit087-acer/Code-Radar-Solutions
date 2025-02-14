#include <stdio.h>
int main(){
    int y;
    scanf("%d",&y);
    if(y<0 || (y & (1<<31))){
        printf("Set");
    }
    else{
        printf("Not Set");
    }
    return 0;
}