#include <stdio.h>
int isPrime(int i);
int main() {
    int n;
    scanf("%d",&n);
 while(n--){
    int i;
    scanf("%d",&i);
    printf("%d\n",isPrime(i));
 }
    return 0;
}
int isPrime(int i){
   int n;
   scanf("%d",&n);
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