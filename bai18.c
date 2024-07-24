#include <stdio.h> // tổng chữ số chẵn lẻ của n

int evensum(long long n){
    if(n < 10){
        if(n % 2 == 0) return n;
        else return 0;
    }
    else{
        if(n % 10 % 2 == 0) return n % 10 + evensum(n / 10);
        else return evensum(n / 10);
    }
}
int oddsum(long long n){
    if(n < 10){
        if(n % 2 == 1) return n;
        else return 0;
    }
    else{
        if(n % 10 % 2 == 1) return n % 10 + oddsum(n / 10);
        else return oddsum(n / 10);
    }
}
int main(){
    long long n;
    scanf("%lld", &n);
    printf("%d %d", evensum(n), oddsum(n));

    return 0;
}