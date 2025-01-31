#include <stdio.h>
int countleadingzeroes( int n){
    int count=0;
    for(int i=31;i>=0;i--){
        if(n>>(i&1)){
            break;
            
        }
        count++;}
    return count;
    }
int main(){
    int n;
    scanf("%d",&n);
    int y=countleadingzeroes(n);
    printf("%d",y);
    return 0;
}