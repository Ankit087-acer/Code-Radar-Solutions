#include <stdio.h>
int countleadingzeroes(unsigned int n){
    int count=0;
    for(int i=31;i>=0;i--){
        if(n>>(i&1)){
            break;
            
        }
        count++;}
    return count;
    }
int main(){
    unsigned int n;
    scanf("%u",&n);
    int y=countleadingzeroes(n);
    printf("%d",y);
    return 0;
}