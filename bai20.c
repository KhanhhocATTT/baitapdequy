#include <stdio.h> // tính thao tác để đưa n về 1
#include <math.h>

int step(long long n){
    if(n == 1) return 0;
    else{
        int cnt1 = 1e9, cnt2 = 1e9, cnt3 = 1e9;
        if(n % 2 == 0) cnt1 = step(n / 2) + 1;
        if(n % 3 == 0) cnt2 = step(n / 3) + 1;
        if(n > 1) cnt3 = step(n - 1) + 1;
        return fmin(cnt1, fmin(cnt2, cnt3)); 
    }
}
int main(){
    long long n;
    scanf("%lld", &n);
    printf("%d", step(n));

    return 0;
}