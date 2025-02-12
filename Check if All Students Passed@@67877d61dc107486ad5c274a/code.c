#include <stdio.h>
struct Student{
  int j;
  char name[100];
  float marks;
};
int main(){
    int n;
    scanf("%d",&n);
    struct Student s1[n];
    for(int i=0;i<n;i++){
        scanf("%d %s %.1f",&s1[i].j,&s1[i].name,&s1[i].marks);
    }
    for(int i=0;i<n;i++){
        if(s1[i].marks>50){
            printf("All Passed");
        }
        else{
            printf("Not All Passed");
        }
    }
    return 0;
}