#include <stdio.h>
int isPrime(int t,num);


int isPrime(int t,num){
   int y=0;
    if(num<=1){
        printf("Not Prime");
    }
    else{
        for(int i=1;i<=n;i++){
            if(num%i==0){
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