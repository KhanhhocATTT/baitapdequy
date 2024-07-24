// -1 + 2 - 3 + 4.....

#include <stdio.h>

int sum(int n){
    if(n == 0) return n;
    else{
        if(n % 2 == 0) return n + sum(n  - 1);
        else return -n + sum(n - 1);
    }
}

int main(){
    int n;
    scanf("%d", &n);
    printf("%d", sum(n));

    return 0;
}