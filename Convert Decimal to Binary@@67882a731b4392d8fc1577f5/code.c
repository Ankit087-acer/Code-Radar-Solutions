#include <stdio.h>
void decimal(int n);
int main() {
    int n;
    scanf("%d",&n);
    int y=decimal(n);
    printf("%d",y);
    return 0;
}
void decimal(int n){
if(num==0){
    printf("0");
    return 0;
}
while (num>0){
    printf("%d",n%2);
    n/=2;
}
}