#include <stdio.h>
struct MovieTicket{
    char name[100];
    char type[100];
    float price;
};
int main(){
    int n;
    scanf("%d",&n);
    struct MovieTicket s1[n];
    float standard_total=0,Premium_total=0,VIP_total=0;
    for(int i=0;i<n;i++){
          scanf("%s %s %f",&s1[i].name,&s1[i].type,&s1[i].price);
    }
    for(int i=0;i<n;i++){
       if(s1[i].type="Standard"){
        standard_total+=s1[i].price;
       }
       else if(s1[i].type="Premium"){
        Premium_total+=s1[i].price;
       }
       else if(s1[i].type="VIP"){
        VIP_total+=s1[i].price;
       }
}
    printf("Standard: %.2f, Premium: %.2f, VIP: %.2f",standard_total,Premium_total,VIP_total);
    return 0;
}