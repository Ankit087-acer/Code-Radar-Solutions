#include<stdio.h>
int main(){
    int size,arr[100],d_ele;
    scanf("%d",&size);
    for(int i=0;i<size;i++){
        scanf("%d",&arr[i]);
         d_ele=arr[i];
        for(int i=1;i<=size;i++){
            if(arr[i]=d_ele){
                d_ele=arr[i];
            }
        }
    }
    printf("%d",d_ele);
    return 0;

}