#include <stdio.h>
int isPrime(int i,n);
int main() {
    int n;
    scanf("%d",&n);
    for(int i=1;i<=n;i++){
        scanf("%d",&i);
    }
    return 0;
}
int isPrime(int i,n){
   
   
    int y=0;
    if(n<=1){
        printf("Not Prime");
    }
    else{
        for(int i=1;i<=n;i++){
            if(n%i==0){
                y++;
            }}
        if(y>2){
                printf("%d",0);
            }
        else{
                printf("%d",1);
            }
        
    }
}