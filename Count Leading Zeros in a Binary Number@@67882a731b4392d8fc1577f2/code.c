#include <stdio.h>
void lead(unsigned int n);
int main() {
   unsigned int n;
   scanf("%d",&n);
   lead(n);
   
}
void lead(int n){
    for(int i=31;i>=0;i--){
        if(n>>(i&1)){
            break;
        }
        count++;
    }
    return count;

}