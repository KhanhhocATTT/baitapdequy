#include <stdio.h>

int print1(long long n){
    if(n < 10) printf("%d ", n);
    else{
        printf("%d ", n % 10);
        print1(n / 10);
    }
}
int print2(long long n){
    if(n < 10) printf("%d ", n);
    else{
        print2(n / 10);
        printf("%d ", n % 10);
    }
}

int main(){
    long long n;
    scanf("%lld", &n);
    print1(n);
    printf("\n");
    print2(n);

    return 0;
}