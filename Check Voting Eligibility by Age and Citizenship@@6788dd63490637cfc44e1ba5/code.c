#include <stdio.h>
int main(){
int age,n;
scanf("%d%d",&age,&n);
if(age>=18&&n==1||age>=18&&n==0){
    printf("Eligible");
}
if(age<=18&&n==1||age<=18&&n==0) {
    printf("Not Eligible");
}
return 0;
}
