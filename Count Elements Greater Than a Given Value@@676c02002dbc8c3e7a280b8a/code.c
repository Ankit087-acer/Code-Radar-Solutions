#include <stdio.h>
int main(){
    int size,arr[100],a,count=0;
    scanf("%d %d",&size,&a);
    for(int i=0;i<size;i++){
        scanf("%d",&arr[i]);
        if(arr[i]>a){
            count++;
        }
    }
    printf("%d",count);
    return 0;
}