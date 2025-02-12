#include <stdio.h>
struct rectangle{
    int l;
    int b;
};
int main(){
    int n;
    scanf("%d",&n);
    struct s1[n];
    for(int i=0;i<n;i++){
        scanf("%d %d",&s1[i].l,&s1[i].b);
    }
    for(int i=0;i<n;i++){
    float area=s1[i].l*s1[i].b;
    float perimeter=2*(s1[i].l+s1[i].b);
    printf("Rectangle %d: Area = %.2f, Perimeter = %.2f",n,area,perimeter);}
    return 0;
}