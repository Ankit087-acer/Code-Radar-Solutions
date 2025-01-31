#include <stdio.h>
int decimal(int n);
int main() {
    int n;
    scanf("%d",&n);
    int y=decimal(n);
    printf("%d",y);
    return 0;
}
int decimal(int n){

while (n>0){
    printf("%d",n%2);
    n/=2;
}
}