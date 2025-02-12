#include<stdio.h>
struct book{
    char b_name[100];
    char a_nam1[100];
    float p;
};
int main(){
    int n;
    scanf("%d",&n);
    struct book s1[n];
    for(int i=0;i<n;i++){
        scanf("%s %s %f",&s1[i].b_name,&s1[i].a_nam1,&s1[i].p);
}
float t;
scanf("%d",&t);
for(int i=0;i<n;i++){
    if(s1[i].p>t){
        printf("Books above price %.2f:\n",t);
        printf("Title: %s, Author: %s, Price: %.2f",s1[i].b_name,s1[i].a_nam1,s1[i].p);
    }
}
return 0;
}