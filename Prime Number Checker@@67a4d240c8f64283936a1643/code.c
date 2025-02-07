#include <stdio.h>
int isPrime(int i,n);
int main() {
    int n;
    scanf("%d",&n);
 while(n--){
    int i;
    scanf("%d",&i);
    printf("%d\n",isPrime(i,n));
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
             printf('0');
            }
        else{
             printf('1'); 
            }
        
    }
}