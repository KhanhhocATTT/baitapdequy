// 1 + 1/2 + 1/3 +....

#include <stdio.h>

float sum(int n){
    if(n == 1) return 1;
    else return 1.0 / n + sum(n - 1);
}

int main(){
    int n;
    scanf("%d", &n);
    printf("%.2f", sum(n));

    return 0;
}
