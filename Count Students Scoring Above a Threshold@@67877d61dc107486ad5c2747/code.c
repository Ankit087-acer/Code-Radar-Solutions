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
    float t;
     scanf("%f",&t);
     int count=0;
    for(int i=0;i<n;i++){
        if(s1[i].marks>t){
             count++;
        }
    }
    printf("Count of students scoring above %.2f: %d",t,count);
}