#include <stdio.h>
int main(){
    int size,arr[100];
    scanf("%d",&size);
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
        int temp=arr[i],reverse=0,c;
        while(temp>0){
            c=temp%10;
            reverse=reverse*10+c;
            temp/=10;
        }
        if(arr[i]==reverse){
            printf("YES");
        }
        else{
             printf("NO");
        }

    }
    return 0;

}