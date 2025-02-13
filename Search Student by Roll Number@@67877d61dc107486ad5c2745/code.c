#include <stdio.h>
struct Student{
    int r;
    char name[100];
    float marks;
};
int main(){
    int n;
    scanf("%d",&n);
    struct Student s1[n];
    for(int i=0;i<n;i++){
        scanf("%d %s %f",&s1[i].r,&s1[i].name,&s1[i].marks);
    }
    int roll;
    scanf("%d",&roll);
    int flag=0;
    for(int i=0;i<n;i++){
        if(s1[i].r==roll){
            printf("Roll Number: %d, Name: %s, Marks: %.2f",s1[i].r,s1[i].name,s1[i].marks);
            flag=1;
        }
    }
    if(flag==0){
            printf("Student not found");
        }
    return 0;
}