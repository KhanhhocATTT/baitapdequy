// S = 1 + 2 + 3 +....+n

#include <stdio.h>

int sum(int n){
    if(n == 0) return n;
    else return n + sum(n - 1);
}

int main(){
    int n;
    scanf("%d", &n);
    printf("%d", sum(n));

    return 0;
}