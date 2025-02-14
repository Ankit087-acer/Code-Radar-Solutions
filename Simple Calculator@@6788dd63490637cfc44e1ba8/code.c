#include <stdio.h>
int main(){
    int a,b;
    char o;
    scanf("%d %d %c",&a,&b,&o);
    switch(a,b){
        case '+': printf("%d\n",a+b);
           break;
        case '-': printf("%d\n",a-b);
           break;
        case '*': printf("%d\n".a*b);
          break;
        case '/':if(b>0){
            printf("%d\n",a/b);
        }
        else{
            printf("error");
        }
        break;
        default:printf("error");
}
return 0;
}