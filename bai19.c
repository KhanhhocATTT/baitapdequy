// kiểm tra chữ só toàn chẵn hoặc toàn lẻ

#include <stdio.h>

int evencheck(long long n){
    if(n < 10){
        if(n % 2 == 0) return 1;
        else return 0;
    }
    else{
        if(n % 10 % 2 == 0) return 1;
        else return evencheck(n / 10);
    }
}
int oddcheck(long long n){
    if(n < 10){
        if(n % 2 == 1) return 1;
        else return 0;
    }
    else{
        if(n % 10 % 2 == 1) return 1;
        else return oddcheck(n / 10);
    }
}

int main(){
    long long n;
    scanf("%lld", &n);
    if(evencheck(n) == 1) printf("YES");
    else printf("NO");

    return 0;
}