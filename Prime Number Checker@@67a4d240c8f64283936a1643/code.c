#include <stdio.h>
int isPrime(int num){
   int y=0;
    if(num<=1){
       printf('0');
    }
    else{
        for(int i=1;i<=num;i++){
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