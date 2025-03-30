int printPrimeschecker(int n){
    if(n<=1){
        return 0;
    }
    for(int i=2;i*i<=n;i++){
        if(n%i==0){
            return 0;
        }
    }
    return 1;
}
void printPrimesInRange(int a,int b){
    for(int i=a;i<=b;i++){
        if(printPrimeschecker(i)){
            printf("%d ",i);
        }
        else{
            printf("No prime numbers");
        }
    }
    
}