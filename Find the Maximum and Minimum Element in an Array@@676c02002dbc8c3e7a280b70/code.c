#include <stdio.h>
int main(){
    int size,arr[100],max_ele,min_ele;
    scanf("%d",&size);
    for(int i=0;i<size;i++){
        scanf("%d",&arr[i]);
        max_ele=arr[0];
        min_ele=arr[0];
        for(int i=1;i<size;i++){
            if(arr[i]>max_ele){
                max_ele=arr[i];
            }
        }
        for(int i=1;;i<n;i++){
            if(arr[i]<min_ele){
                min_ele=arr[i];
            }
        }
    }
    printf("%d %d",min_ele,max_ele);
    return 0;
}
