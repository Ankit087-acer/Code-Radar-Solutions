#include <stdio.h>
struct student{
    int j;
    char name[100];
    float marks;
};
int main(){
    int n;
    scanf("%d",&n);
    float sum=0;
    struct student s1[n];
    for(int i=0;i<n;i++){
        scanf("%d %s %marks",&s1[i].j,&s1[i].name,&s1[i].marks);
        sum+=s1[i].marks;
    }
    printf("Total Marks: %.2f\n",sum);
    printf("Average Marks: %.2f\n",sum/n);
    return 0;

}