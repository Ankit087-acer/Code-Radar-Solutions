#include <stdio.h>
int countleadingzeroes(unsigned int n){
    int count=0;
    while(num>0){
        if(num&(1<<31)){
            break;
            count++;
            num<<=1;
        }
    }
    return count;
}
int main(){
    int unsigned int n;
    scanf("%u",&n);
    int y=countleadingzeroes(n);
    printf("%d",y);
    return 0;
}