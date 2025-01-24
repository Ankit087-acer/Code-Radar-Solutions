#include <stdio.h>



int main() {
    int n;
    scanf("%d",&n);
    int y=0;
    if(n<=1){
        printf("Not Prime");
    }
    else{
        for(int i=1;i<=1;i++){
            if(n%i==0){
                y++;
            }
          if(n>2){
                printf("Not Prime");
            }
            else{
                printf("Prime");
            }
        }
    }

    return 0;
}