#include <stdio.h>
struct Employee{
    int id;
    char name[100];
    float salary;
    float bonus;
};
int main(){
    int n;
    scanf("%d",&n);
    struct Employee s1[n];
    
    for(int i=0;i<n;i++){
        scanf("%d %s %f",&s1[i].id,&s1[i].name,&s1[i].salary);
    }
    for(int i=0;i<n;i++){
        if(s1[i].salary<50000){
            s1[i].bonus=s1[i].salary/10;
            printf("Employee ID: %d, Name: %s, Bonus: %.2f\n",s1[i].id,s1[i].name,bonus);
        }
        else {
             s1[i].bonus=s1[i].salary/20;
             printf("Employee ID: %d, Name: %s, Bonus: %.2f\n",s1[i].id,s1[i].name,bonus);
             
        }
    }
   return 0;
}