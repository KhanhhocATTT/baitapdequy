// 1mu2 + 2mu2 +....+nmu2

#include <stdio.h>

int sum(int n){
    if(n == 0) return n;
    else return n * n + sum(n - 1);
}

int main(){
    int n;
    scanf("%d", &n);
    printf("%d", sum(n));

    return 0;
}