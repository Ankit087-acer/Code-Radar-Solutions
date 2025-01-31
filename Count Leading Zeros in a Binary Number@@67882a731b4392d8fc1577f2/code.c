#include <stdio.h>
void lead(int n);
int main() {
   int n;
   scanf("%d",&n);
   lead(n);
   return 0;
}
void lead(int n){
    for(int i=31;i>=0;i--){
        if(n>>i&1){
            break;
        }
        count++;
    }
    return count;

}