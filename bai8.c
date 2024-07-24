// tinh ucln, bcnn

#include <stdio.h>

int ucln(int a, int b){
    if(b == 0) return a;
    else return ucln(b, a % b);
}

int bcnn(int a, int b){
    return (a * b) / ucln(a, b);
}

int main(){
    int a, b;
    scanf("%d %d", &a, &b);
    printf("%d %d", ucln(a, b), bcnn(a, b));

    return 0;
}