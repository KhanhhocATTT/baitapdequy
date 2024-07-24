// tim chu so dau tien cua n

#include <stdio.h>

int first(long long n){
    if(n < 10) return n;
    else return first(n / 10);
}

int main(){
    long long n;
    scanf("%lld", &n);
    printf("%d", first(n));

    return 0;
}