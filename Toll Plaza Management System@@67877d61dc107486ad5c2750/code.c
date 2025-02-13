#include <stdio.h>
#include <string.h>
struct vehicle{
    char number[100];
    char v[100];
    float price;
};
int main(){
    int n;
    scanf("%d",&n);
    float c=0,t=0,b=0;
    struct vehicle s1[n];
    for(int i=0;i<n;i++){
        scanf("%s %s %f",&s1[i].number,&s1[i].v,&s1[i].price);
    }
    for(int i=0;i<n;i++){
        if(strcmp(s1[i].v,"Car")==0){
            c+=s1[i].price;
        }
        else if(strcmp(s1[i].v,"Truck")==0){
            t+=s1[i].price;
        }
        else if(strcmp(s1[i].v,"Bike")==0){
            b+=s1[i].price;
        }
    }
    printf("Cars: %.2f, Trucks: %.2f, Bikes: %.2f",c,t,b);
    return 0;
}