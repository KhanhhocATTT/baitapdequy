// chuyen doi he thap phan sang he 16

#include <stdio.h>

void change(long long n){
    if(n < 16){
        if(n <= 9) printf("%d", n);
        else printf("%c", n + 55);
    }
    else{
        change(n / 16);
        int a  = n % 16;
        if(a <= 9) printf("%d", a);
        else printf("%c", a + 55);
    }
}
int main(){
    long long n;
    scanf("%lld", &n);
    change(n);

    return 0;
}