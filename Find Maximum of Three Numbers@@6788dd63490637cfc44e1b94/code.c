#include <stdio.h>
int main(){
    int a,b,c;
    scanf("%d%d%d",&a,&b,&c);
    int l=a;
    if(b>l && b>c){
        printf("%d",b);
    }
    else if(c>l && c>b){
        printf("%d",c);
    }
    else{
        printf("%d",l);
    }
    return 0;
}