#include <stdio.h>
int countleadingzeroes(unsigned int n);
int countleadingzeroes(unsigned int n){
    int count=0;
    while(n>0){
        if(n&(1<<31)){
            break;
            count++;
            n<<=1;
        
    }
    return count;
}}
int main(){
    int unsigned int n;
    scanf("%u",&n);
    int y=countleadingzeroes(n);
    printf("%d",y);
    return 0;
}