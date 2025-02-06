#include <stdio.h>
int main() {
    int arr[],int size,int evencount,int oddcount;
    evencount=0;
    oddcount=0;
    scanf("%d",&size);
    int arr[size];
    printf("%d",size);
    for(int i=0;i<size;i++){
        scanf("%d",&arr[i]);
    }
    for(int j=0;j<size;j++){
        if(arr[j]%2==0){
            (evencount)++;
        }
        else{
            (oddcount)++;
        }
    }
    printf("%d %d",evencount,oddcount);
    return 0;
}