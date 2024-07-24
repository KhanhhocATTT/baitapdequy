 // tìm chữ số lớn nhất và nhỏ nhất của n

 #include <stdio.h>
 #include <math.h>
 
 int maxsolve(long long n){
    if(n < 10) return n;
    else return fmax(n % 10, maxsolve(n / 10));
 }
 int minslove(long long n){
    if(n < 10) return n;
    else return fmin(n % 10, minslove(n / 10));
 }

 int main(){
    long long n;
    scanf("%lld", &n);
    printf("%d %d", maxsolve(n), minslove(n));

    return 0;
 }