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
    for(int i=0;i<n;i++){
        if(s1[i].r){
            printf("Roll Number: %d, Name: %s, Marks: %.2f",s1[i].r,s1[i].name,s1[i].marks);
        }
        else{
            printf("Student not found");
        }
    }
    return 0;
}