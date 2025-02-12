#include<stdio.h>
struct student{
int j,char name[100],float marks;
};
int main(){
    int n;
    scanf("%d",&n);
    struct student(s1[n]);
    for(int i=0;i<n;i++){
        scanf("%d %c %f",&s1[i].j,&s1[i].name,&s1[i].marks);
    }
    for(int i=0;i<n;i++){
        printf("Roll Number: %d, ",s1[i].j);
        printf("Name: %s, ",s1[i].name);
        printf("Marks: %.2f\n",s1[i].marks);
    }
    return 0;
}
