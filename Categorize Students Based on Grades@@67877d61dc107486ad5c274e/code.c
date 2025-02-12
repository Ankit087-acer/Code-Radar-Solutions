#include <stdio.h>
struct student{
    int roll_number;
    char name[100];
    float marks;
};
int main(){
    int n;
    scanf("%d",n);
    struct student s1[n];
    for(int i=0;i<n;i++){
        scanf("%d %s %f",&s1[i].roll_number,&s1[i].name,&s1[i].marks);
    }
    for(int i=0;i<n;i++){
        if(s1[i].marks>=85){
            printf("Roll number:%d, Name: %s,Grade: A",s1[i].roll_number,s1[i].name);
        }
        else if(s1[i].marks<=84 && s1[i].marks>=70){
            printf("Roll number:%d, Name: %s,Grade: B",s1[i].roll_number,s1[i].name);
        }
        else{
            printf("Roll number:%d, Name: %s,Grade: C",s1[i].roll_number,s1[i].name);
        }
    }
  return 0;
}