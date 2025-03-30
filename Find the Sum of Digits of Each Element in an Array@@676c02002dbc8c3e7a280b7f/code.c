#include <stdio.h>
int main(){
    int size,arr[100];
    scanf("%d",&size);
    for(int i=0;i<size;i++){
        int sum=0,b;
        scanf("%d",&arr[i]);
        int temp=arr[i];
        while(temp>0){
            b=temp%10;
            sum+=b;
            temp/=10;
        }
        printf("%d ",sum);

    }
    return 0;

}