#include <stdio.h>
struct Student{
    int r;
    char name[100];
    float marks;
};
int main(){
    int n;
    scanf("%d",&n);
    struct student s1[n];
    for(int i=0;i<n;i++){
        scanf("%d %s %f",&s1[i].r,&s1[i].name,&s1[i].marks);
    }
    int r1;
    scanf("%d",&r1);
    int flag=0;
    for(int i=0;i<n;i++){
        if(s1[i].r==r1){
            printf("Roll Number: %d, Name: %s, Marks: %.2f",s1[i].r,s1[i].name,s1[i].marks);
            flag=1;
        }
    }
    if(flag==0){
            printf("Student not found");
        }
    return 0;
}