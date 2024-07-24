// tinh luy thua nhi phan

#include <stdio.h>

int luythua(int a, int b){
    if(b == 0) return 1;
    int tmp = luythua(a, b / 2);
    if(b % 2 == 0) return tmp * tmp;
    else return tmp * tmp * a;
}

int main(){
    int a, b;
    scanf("%d %d", &a, &b);
    printf("%d", luythua(a, b));

    return 0;
}