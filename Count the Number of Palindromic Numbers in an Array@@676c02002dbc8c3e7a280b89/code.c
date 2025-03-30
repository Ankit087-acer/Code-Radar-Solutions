#include <stdio.h>
int main(){
    int size,arr[100],count=0;
   scanf("%d",&size);
  for(int i=0;i<size;i++){
  scanf("%d",&arr[i]);
 
  }
 printf("\n");
for(int i=0;i<size;i++){
  int c,num=arr[i],reverse=0;
 while(num>0){
    c=num%10;
 reverse=reverse*10+c;
  num/=10;
  }
  if(arr[i]==reverse){
    count++;
  }
 
}
printf("%d",count);
return 0;}