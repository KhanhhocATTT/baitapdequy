// tinh so fibonaci thu n

#include <stdio.h>

long long fibo(int n){
    if(n == 1) return 0;
    else if(n == 2) return 1;
    else{
        return fibo(n - 1) + fibo(n - 2);
    }
}

int main(){
    int n;
    scanf("%d", &n);
    printf("%lld", fibo(n));

    return 0;
}