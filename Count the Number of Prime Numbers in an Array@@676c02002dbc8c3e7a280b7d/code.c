int prime_checker(int n){
    if(n<=1){
        return 0;
    }
    for(int i=2;i*i<=n;i++){
        return 0;
    }
    return 1;
}
void prime_generator(int n,int count=0){
    for(int i=2;i<=n;i++){
        if(prime_checker(i)){
            count++;
        }
    }
    printf("%d",count);
}
int main(){
    int n,count=0;
    scanf("%d",&n);
    prime_generator(n,count);
    return 0;
}