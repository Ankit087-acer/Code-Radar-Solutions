int fibonacciSeries(int n){
    if(n==1){
        return 0;
    }
    else{
        return fibonacciSeries(n-1)+fibonacciSeries(n-2);
    }
}