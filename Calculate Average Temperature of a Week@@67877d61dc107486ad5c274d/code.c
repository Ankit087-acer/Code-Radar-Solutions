#include<stdio.h>
struct Day{
    char d[100];
    int temp;
};
int main(){
    int n=7;
    struct Day s1[n];
    int sum=0;
    for(int i=0;i<n;i++){
        scanf("%s %d",&s1[i].d,&s1[i].temp);
        sum+=s1[i].temp;
    }
    printf("Average Temperature: %.2f",sum/7.0);
    return 0;
}