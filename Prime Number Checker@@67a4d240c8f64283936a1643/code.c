#include <stdio.h>
int isPrime(int num){
   int y=0;
    if(num<=1){
      return 0;
    }
    else{
        for(int i=2;i<=num;i++){
            if(num%i==0){
                y++;
            }}
        if(y>2){
             return 0;
            }
        else{
             return 1; 
            }
        
    }
}