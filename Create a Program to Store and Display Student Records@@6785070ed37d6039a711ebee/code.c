#include <stdio.h>
struct student{
    int r;
    char name[100];
    float m;
};
int main() {
    int n;
    scanf("%d",&n);
    struct student s1[n];
    for(int i=0;i<n;i++){
        scanf("%d %s %f",&s1[i].r,&s1[i].name,&s1[i].m);
    }
    for(int i=0;i<n;i++){
        printf("Roll Number: %d, ",s1[i].r);
        printf("Name: %s, ",s1[i].name);
        printf("Marks: %.2f\n",s1[i].m);
    }
    return 0;
}