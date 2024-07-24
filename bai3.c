// 1mu3 + 2mu3 +....+ nmu3

#include <stdio.h>
#include <math.h>

long long sum(int n){
    if(n == 0) return n;
    else return pow(n, 3) + sum(n - 1);
}

int main(){
    int n;
    scanf("%d", &n);
    printf("%lld", sum(n));

    return 0;
}