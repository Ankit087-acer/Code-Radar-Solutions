#include <stdio.h>
struct student{
    int j;
    char name[100];
    float marks;
};
int main(){
    int n;
    scanf("%d",&n);
    struct student s1[n];
    float sum=0;
    for(int i=0;i<n;i++){
        scanf("%d %s %f",&s1[i].j,&s1[i].name,&s1[i].marks);
        sum+=s1[i].marks;
}
printf("Average Marks: %.2f",sum/n);
return 0;
    
}