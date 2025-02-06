#include <stdio.h>
int main() {
    int arr[], size, evencount,oddcount;
    scanf("%d",&size);
    evencount=0;
    oddcount=0;
    int arr[size];
    for(int i=1;i<=size;i++){
        scanf("%d",&arr[i]);
    }
    for(int i=1;i<=size;i++){
        if(arr[i]%2==0){
            (evencount)++;
        }
        else{
            (oddcount)++;
        }
    }
    printf("%d %d",evencount,oddcount);
    return 0;
}